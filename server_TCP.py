import socket

# Definindo o endereço IP e a porta do servidor
server_ip = "127.0.0.1"
server_port = 12345

# Criando um socket TCP
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Ligando o socket ao endereço e porta definidos
server_socket.bind((server_ip, server_port))

# Colocando o socket em modo de escuta
server_socket.listen(1)
print(f"Servidor TCP iniciado no IP {server_ip} e porta {server_port}")

# Aceitando a conexão do cliente
client_socket, client_address = server_socket.accept()
print(f"Conexão estabelecida com {client_address}")

while True:
    # Recebendo dados do cliente
    data = client_socket.recv(1024)
    if not data:
        break
    print(f"Mensagem recebida: {data.decode('utf-8')}")

    # Enviando resposta ao cliente
    response = "Mensagem recebida"
    client_socket.send(response.encode('utf-8'))

# Fechando a conexão com o cliente
client_socket.close()
# Fechando o socket do servidor
server_socket.close()
