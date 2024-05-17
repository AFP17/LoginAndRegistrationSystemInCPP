#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>

// Function to register a new user
void registerUser() {
    std::string username, password;
    std::cout << "Enter a new username: ";
    std::cin >> username;
    std::cout << "Enter a new password: ";
    std::cin >> password;

    // Open file in append mode to add new users
    std::ofstream file("users.txt", std::ios::app);
    if (file.is_open()) {
        file << username << " " << password << "\n";
        file.close();
        std::cout << "Registration successful.\n";
    } else {
        std::cout << "Failed to open file for registration.\n";
    }
}

// Function to login a user
bool loginUser() {
    std::string username, password;
    std::cout << "Enter your username: ";
    std::cin >> username;
    std::cout << "Enter your password: ";
    std::cin >> password;

    // Open file to read user data
    std::ifstream file("users.txt");
    std::string usr, pwd;
    if (file.is_open()) {
        while (file >> usr >> pwd) {
            if (usr == username && pwd == password) {
                std::cout << "Login successful.\n";
                return true;
            }
        }
        file.close();
    } else {
        std::cout << "Failed to open file for login.\n";
    }
    std::cout << "Login failed.\n";
    return false;
}
