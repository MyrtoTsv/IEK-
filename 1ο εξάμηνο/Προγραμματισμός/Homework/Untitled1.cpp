//zhta enan arithmo mh arnhtiko kai na epistrefei ton paragontiko tou
#include <stdio.h>
#include <stdlib.h>

double paragontiko(int n);

int main(void) {
    float number;
    double factorial;

    do {
        printf("Dwse enan arithmo mh arnhtiko akeraio: ");
        scanf("%f", &number);

        if (number < 0 || number != (int)number) {
            printf("Lathos!\n\a");
            printf("Parakalw ksanaprospathiste. . .\n");
        }

    } while (number < 0 || number != (int)number);

    factorial = paragontiko((int)number);

    printf("To paragontiko tou %.0f einai iso me %.0lf.\n", number, factorial);
    system("PAUSE");
    return 0;
}

double paragontiko(int n) {
    double f = 1; //Arxikopoioume me 1 gia na einai swstos o poll/smos tou paragontikou
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}


