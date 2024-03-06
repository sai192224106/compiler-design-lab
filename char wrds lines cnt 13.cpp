#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

int main() {
    int i, j, cc = 0, wc = 0, lc = 1;
    char s[] = "i ordered a product in online\n product is very nice\n it is cost efficient and ecofriendly";

    for (i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i]))
            cc++;
        if (s[i] == ' ' || s[i] == '\0') 
            wc++;
        if (s[i] == '\n')
            lc++;
    }

    printf("char count %d \n ", cc);
    printf("word count %d \n ", wc);
    printf("lines count %d \n ", lc);
    printf("%s ", s); 

    return 0;
}

