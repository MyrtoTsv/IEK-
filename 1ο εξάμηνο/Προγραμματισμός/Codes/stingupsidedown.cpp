#include <stdio.h>
#include <string.h>
#define STR_SIZE 50

int main() {
    char string[STR_SIZE];
    int i;

    printf("Enter your string content until 50 characters: \n");
    gets(string);
    
    for (i = strlen(string) - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }

    printf("\n");
    return 0;
}
