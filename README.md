# Login and Signup System

## Description
This is a simple C program that implements a login and signup system. The program allows users to either create a new account (sign up) or log into an existing account. The credentials are stored in a text file `Password.txt`. The passwords are hidden while typing with the `*` symbol for security.

## Features
- **Signup**: Create a new account with a unique username and password.
- **Login**: Log into the system using your credentials.
- **Password Protection**: Passwords are not displayed on the screen and are stored securely in a text file.
- **Error Handling**: Prompts for incorrect login credentials or mismatched passwords.

## How to Use
1. **Choose an option**:
   - Press `1` to sign up and create a new account.
   - Press `2` to log in with an existing account.
   
2. **Sign Up**:
   - Enter a unique username.
   - Enter a password (the password will be shown as `*` while typing).
   - Re-enter the password to confirm.
   
3. **Login**:
   - Enter your username and password (password will be shown as `*`).

## Files Used
- `Password.txt`: A text file where usernames and passwords are stored.

## Code Overview
The program uses basic file handling in C to store user credentials. It performs the following functions:
- **Login**: Compares the entered username and password with stored credentials.
- **Sign-up**: Allows the creation of new accounts with password validation.

## Requirements
- C Compiler (GCC or any other standard compiler)

## Author
Created by **Diyansi Chaudhary**
