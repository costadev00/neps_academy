import socket

# Definindo o endereço IP e a porta do servidor
server_ip = "127.0.0.1"
server_port = 12345

# Criando um socket UDP
client_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# Mensagem a ser enviada
message = "Olá, servidor!"

# Enviando a mensagem ao servidor
client_socket.sendto(message.encode('utf-8'), (server_ip, server_port))

# Recebendo resposta do servidor
response, server_address = client_socket.recvfrom(1024)
print(f"Resposta do servidor: {response.decode('utf-8')}")

# Fechando o socket do cliente
client_socket.close()
