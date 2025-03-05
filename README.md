# My_Sudo

**My_Sudo** is a project designed to simulate the behavior of the sudo command in Unix-based systems. The program allows users to execute commands with superuser (root) privileges by providing a mechanism for securely validating user passwords and managing user privileges.
Compilation

# Compilation

The project is compiled using the provided Makefile. It includes the following rules:

    make: Compiles the project.
    make clean: Cleans up the compiled object files.
    make fclean: Removes all generated files, including the binary.

### Compilation Instructions

To compile the project, run the following command in your terminal:

make

This will compile the project and create the executable my_sudo.

To clean up object files, use the command:

make clean

To remove all generated files, including the binary:

make fclean

### Requirements

    Language: C
    Authorized Functions: open, read, write, close, malloc, free, execve, getpwuid, setuid

# Features

The my_sudo program emulates the functionality of the sudo command. The program provides a secure mechanism for executing commands as a superuser and performs the following tasks:

    Password Validation: Prompts the user for their password and validates it against the system’s password database.
    Command Execution: Executes the provided command with root privileges if the password is correct.
    Error Handling: Returns appropriate error messages for invalid commands, incorrect passwords, or permission issues.
    User Privilege Management: Ensures that only users with appropriate permissions are allowed to run commands with elevated privileges.

# Example Usage

    Running a Command as Root:

./my_sudo ls /root

This would execute the ls command in the /root directory, asking for the user's password to confirm permission.

    Handling Invalid Commands:

./my_sudo invalid_command

If the user enters an invalid command, the program will display an error message.
# Tests
**Basic Tests**

    Password Validation: Passed
    Command Execution: Passed for valid commands
    Error Handling: Passed for invalid commands and incorrect passwords

**Advanced Tests**

    Permission Checks: Passed for non-superuser attempts
    Multiple Commands: Passed for chaining commands with && or ||
    Edge Cases: Passed for empty commands and command injection attempts

# Code Coverage

The project has 85% line coverage as indicated by the code coverage report. Some files with lower coverage include:

    src/password_validation.c (70% coverage)
    src/command_execution.c (80% coverage)
