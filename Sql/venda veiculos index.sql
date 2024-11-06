use vendas_veiculos;

ALTER TABLE veiculos
ADD COLUMN valor double;

DELIMITER $$ -- muda o delimitador para $$
create procedure inserir_clientes() -- cria um procedimento para inserir registros na tabela cliente
BEGIN
	DECLARE i int default 1;
    WHILE i <= 100 do -- loop de 100 repetições
		insert into cliente (nome, cnh, tipo_cliente, cartao)
        values (
            concat ('cliente', i),
            concat ('CNH', LPAD(I, 5, '0')), 
            if (i % 2 = 0, 'Física' , 'Jurídica'),
            concat (LPAD(i , 15 , '0'))
            );
            set i = i + 1; -- incrementa o contador i
	END WHILE;
END $$
DELIMETER ; -- retorna o delimitador para o padrão(;)
CALL inserir_clientes(); -- Executa o procedimento para inserir os 100 clientes
	