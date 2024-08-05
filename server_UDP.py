import socket

# Definindo o endereço IP e a porta do servidor
server_ip = "127.0.0.1"
server_port = 12345

# Criando um socket UDP
server_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# Ligando o socket ao endereço e porta definidos
server_socket.bind((server_ip, server_port))

print(f"Servidor UDP iniciado no IP {server_ip} e porta {server_port}")

while True:
    # Recebendo dados do cliente
    data, client_address = server_socket.recvfrom(1024)
    print(f"Mensagem recebida de {client_address}: {data.decode('utf-8')}")

    # Enviando resposta ao cliente
    response = "Mensagem recebida"
    server_socket.sendto(response.encode('utf-8'), client_address)
