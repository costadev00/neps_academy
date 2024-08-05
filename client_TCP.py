import socket

# Definindo o endereço IP e a porta do servidor
server_ip = "127.0.0.1"
server_port = 12345

# Criando um socket TCP
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Conectando ao servidor
client_socket.connect((server_ip, server_port))

# Mensagem a ser enviada
message = "Olá, servidor!"

# Enviando a mensagem ao servidor
client_socket.send(message.encode('utf-8'))

# Recebendo resposta do servidor
response = client_socket.recv(1024)
print(f"Resposta do servidor: {response.decode('utf-8')}")

# Fechando o socket do cliente
client_socket.close()
