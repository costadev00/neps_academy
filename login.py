# Create a dictionary to store usernames and passwords
users = {
    "user1": "password1",
    "user2": "password2"
}

def login():
    username = input("Enter your username: ")
    password = input("Enter your password: ")

    # Check if the username exists in the dictionary
    if username in users:
        # Check if the password is correct
        if users[username] == password:
            print("Login successful!")
        else:
            print("Invalid password. Please try again.")
    else:
        print("Username not found. Please try again.")

def main():
    while True:
        print("1. Login")
        print("2. Quit")
        choice = input("Enter your choice: ")

        if choice == "1":
            login()
        elif choice == "2":
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()