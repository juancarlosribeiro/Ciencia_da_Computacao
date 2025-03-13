#criente crente

import socket
def iniciar_cliente():

    HOST = '127.0.0.1'
    PORT = 28110

    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as S:
        S.connect((HOST, PORT))
        print("CONECTADO O SERVIDOR: solicitando a data e a hora...")

        S.sendall(b"data e hora")
        data = S.recv(1024)
        print(f"Resposta do servidor: {data.decode()}")

if __name__ == "__main__":
    iniciar_cliente()