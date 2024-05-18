# Login and Registration System in C++

This simple console-based application written in C++ demonstrates a basic login and registration system. Users can register with a username and password, which are then saved to a file. Users can also log in using the credentials they have registered.

## Features

- **User Registration**: Users can register by providing a username and password. Credentials are saved to a file.
- **User Login**: Users can log in using their registered credentials. The application checks the username and password against the saved entries.
- **Data Storage**: User credentials are stored persistently in a plain text file (`users.txt`).
- **Clear Screen on Exit**: The application clears the console screen upon exiting.

## System Requirements

- A C++ compiler such as G++, Clang, or MSVC.
- Access to a terminal or command prompt.
- Operating systems: Windows, macOS, or Linux.

## Installation and Compilation

1. **Clone the repository**:
    ```
    git clone https://github.com/AFP17/LoginAndRegistrationSystemInCPP.git
    ```
2. **Navigate to the project directory**:
    ```
    cd LoginAndRegistrationSystemInCPP
    ```

3. **Compile the project**:
    ```
    g++ login.cpp -o login
    ```
4. **Launch programme**:
    ```
    ./login
    ```
