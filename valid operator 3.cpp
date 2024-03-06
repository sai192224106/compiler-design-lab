#include <stdio.h>

// Function to validate operators
int validate_operator(char op) {
    if (op == '+' || op == '-' || op == '*' || op == '/') {
        return 1; // Operator is valid
    } else {
        return 0; // Operator is not valid
    }
}

int main() {
    char operators[] = {'+', '-', '*', '/', '%', '='}; // You can extend this list as needed
    int num_operators = sizeof(operators) / sizeof(operators[0]);

    printf("Valid Operators:\n");
    for (int i = 0; i < num_operators; i++) {
        if (validate_operator(operators[i])) {
            printf("%c\n", operators[i]);
        }
    }

    return 0;
}

