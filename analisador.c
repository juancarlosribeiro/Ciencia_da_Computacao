#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>


// Definição de tamanho máximo para identificadores e número de linhas/colunas
#define TAMANHO_BUFFER 100
#define TAMANHO_TABELA_SIMBOLOS 100

// Estrutura para armazenar tokens
typedef struct {
    char nome[20];
    char lexema[100];
    int linha;
    int coluna;
} Token;

// Estrutura da tabela de simbolos
typedef struct {
    char simbolos[TAMANHO_TABELA_SIMBOLOS][TAMANHO_BUFFER];
    int tamanho;
} TabelaSimbolos;

// Declaração global da tabela de simbolos
TabelaSimbolos tabelaSimbolos;

// Prototipos de funções
void analisador_lexico(char *codigo_fonte);
bool eh_espaco_em_branco(char c);
bool eh_letra(char c);
bool eh_digito(char c);
bool eh_palavra_reservada(char *palavra);
void processa_numero(char **ptr, int *linha, int *coluna);
void processa_identificador(char **ptr, int *linha, int *coluna);
void processa_operadores_e_simbolos(char **ptr, int *linha, int *coluna);
void insere_na_tabela_simbolos(char *lexema);
bool esta_na_tabela_simbolos(char *lexema);
void reporta_erro(int linha, int coluna, char *mensagem);

// Lista de palavras reservadas
char *palavras_reservadas[] = {"program", "var", "integer", "real", "begin", "end", "if", "then", "else", "while", "do"};
int numero_palavras_reservadas = 11;

// Função principal do analisador léxico
void analisador_lexico(char *codigo_fonte) {
    int linha = 1, coluna = 1;
    char *ptr = codigo_fonte;

    while (*ptr != '\0') {
        if (eh_espaco_em_branco(*ptr)) {
            // Avança para o próximo caractere, descartando espaços
            if (*ptr == '\n') {
                linha++;
                coluna = 1;
            } else {
                coluna++;
            }
            ptr++;
        } else if (eh_digito(*ptr)) {
            // Identifica número
            processa_numero(&ptr, &linha, &coluna);
        } else if (eh_letra(*ptr)) {
            // Identifica palavras reservadas ou identificadores
            processa_identificador(&ptr, &linha, &coluna);
        } else {
            // Verifica operadores e simbolos
            processa_operadores_e_simbolos(&ptr, &linha, &coluna);
        }
    }
}

// Funções de apoio
bool eh_espaco_em_branco(char c) {
    return (c == ' ' || c == '\n' || c == '\t' || c == '\r');
}

bool eh_letra(char c) {
    return isalpha(c);
}

bool eh_digito(char c) {
    return isdigit(c);
}

bool eh_palavra_reservada(char *palavra) {
    for (int i = 0; i < numero_palavras_reservadas; i++) {
        if (strcmp(palavra, palavras_reservadas[i]) == 0) {
            return true;
        }
    }
    return false;
}

// Função para processar números
void processa_numero(char **ptr, int *linha, int *coluna) {
    char buffer[TAMANHO_BUFFER];
    int i = 0;

    while (eh_digito(**ptr)) {
        buffer[i++] = **ptr;
        (*ptr)++;
        (*coluna)++;
    }

    buffer[i] = '\0';
    printf("Token: NUM_INT, Lexema: %s, Linha: %d, Coluna: %d\n", buffer, *linha, *coluna);
}

// Função para processar identificadores e palavras reservadas
void processa_identificador(char **ptr, int *linha, int *coluna) {
    char buffer[TAMANHO_BUFFER];
    int i = 0;

    while (eh_letra(**ptr) || eh_digito(**ptr)) {
        buffer[i++] = **ptr;
        (*ptr)++;
        (*coluna)++;
    }
    buffer[i] = '\0';

    if (eh_palavra_reservada(buffer)) {
        printf("Token: PAL_RES, Lexema: %s, Linha: %d, Coluna: %d\n", buffer, *linha, *coluna);
    } else {
        printf("Token: ID, Lexema: %s, Linha: %d, Coluna: %d\n", buffer, *linha, *coluna);
        insere_na_tabela_simbolos(buffer);
    }
}

// Função para processar operadores simbolos
void processa_operadores_e_simbolos(char **ptr, int *linha, int *coluna) {
    switch (**ptr) {
        case '+':
            printf("Token: OP_AD, Linha: %d, Coluna: %d\n", *linha, *coluna);
            break;
        case '-':
            printf("Token: OP_MIN, Linha: %d, Coluna: %d\n", *linha, *coluna);
            break;
        case '=':
            printf("Token: OP_EQ, Linha: %d, Coluna: %d\n", *linha, *coluna);
            break;
        case ';':
            printf("Token: SMB_SEM, Linha: %d, Coluna: %d\n", *linha, *coluna);
            break;
        case ':':
            // Verificar se é atribuição (:=)
            if (*(*ptr + 1) == '=') {
                printf("Token: OP_ASS, Linha: %d, Coluna: %d\n", *linha, *coluna);
                (*ptr)++;
                (*coluna)++;
            } else {
                printf("Token: SMB_DP, Linha: %d, Coluna: %d\n", *linha, *coluna); // Dois-pontos
            }
            break;
        case ',':
            printf("Token: SMB_COM, Linha: %d, Coluna: %d\n", *linha, *coluna);
            break;
        case '.':
            printf("Token: SMB_PONTO, Linha: %d, Coluna: %d\n", *linha, *coluna);
            break;
        // Adicione outros operadores e simbolos aqui
        default:
            reporta_erro(*linha, *coluna, "Caractere desconhecido");
            break;
    }
    (*ptr)++;
    (*coluna)++;
}



// Função para inserir na tabela de simbolos
void insere_na_tabela_simbolos(char *lexema) {
    if (!esta_na_tabela_simbolos(lexema)) {
        strcpy(tabelaSimbolos.simbolos[tabelaSimbolos.tamanho++], lexema);
        printf("Simbolo inserido: %s\n", lexema);
    }
}

// Função para verificar se um identificador já está na tabela de simbolos
bool esta_na_tabela_simbolos(char *lexema) {
    for (int i = 0; i < tabelaSimbolos.tamanho; i++) {
        if (strcmp(tabelaSimbolos.simbolos[i], lexema) == 0) {
            return true;
        }
    }
    return false;
}

// Função para reportar erros
void reporta_erro(int linha, int coluna, char *mensagem) {
    printf("Erro lexico: %s na linha %d, coluna %d\n", mensagem, linha, coluna);
}

// Função principal
int main() {



    // Exemplo de código-fonte em MicroPascal
    char codigo_fonte[] =
        "program Exemplo;\n"
        "var x, y : integer;\n"
        "begin\n"
        "x := 10;\n"
        "end.\n";

    // Inicializa a tabela de simbolos
    tabelaSimbolos.tamanho = 0;

    // Executa o analisador léxico
    analisador_lexico(codigo_fonte);

    return 0;
}
