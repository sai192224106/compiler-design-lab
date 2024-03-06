#include<stdio.h>
#include<string.h>

int main() {
    char string[50];
    int flag = 0;
    
    printf("The grammar is: S -> aS, S -> Sb, S -> ab\n");
    printf("Enter the string to be checked:\n");
    gets(string);

    // Check if the string starts with 'a'
    if (string[0] == 'a') {
        flag = 0;
        // Iterate through the string
        for (int i = 1; i < strlen(string); i++) {
            if (string[i] == 'b') {
                flag = 1;
                continue;
            } else if ((flag == 1) && (string[i] == 'a')) {
                printf("The string does not belong to the specified grammar.\n");
                return 0;
            } else if (string[i] == 'a') {
                continue;
            } else if ((flag == 1) && (string[i] == '\0')) {
                printf("String accepted.\n");
                return 0;
            } else {
                printf("String not accepted.\n");
                return 0;
            }
        }
        printf("String accepted.\n");
    } else {
        printf("String does not start with 'a'.\n");
    }

    return 0;
}

