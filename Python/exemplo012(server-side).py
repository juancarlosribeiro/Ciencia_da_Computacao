#servidor (data e hora)

import socket
from datetime import datetime

def iniciar_servidor():

    HOST = '127.0.0.1' #ipv4 (4 blocos de 8 bits)
    PORT = 28110

    # cria o carai da conexão com socket tcp/ip

    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as S:
        S.bind((HOST,PORT)) #vincula o socket ao endereço e a porteira
        S.listen()
        print(f"Servidor ouvindo em {HOST} : {PORT}")

        while True:

            conn, addr = S.accept()
            with conn:
                print(f"Entrou o grosso. Conectado por {addr}")
                while True:
                    data = conn.recv(1024)
                    if not data:
                        break

                if data.decode().strip().lower() == "data e hora":
                    agora = datetime.now().strftime("%Y-%M-%d %H:%M:%S ")
                    resposta = f"Data e hora atual: {agora}"
                    conn.sendall(resposta.encode())

                else:
                    conn.sendall("Mensagem inválida menor")    

if __name__ == "__main__":
    iniciar_servidor()

