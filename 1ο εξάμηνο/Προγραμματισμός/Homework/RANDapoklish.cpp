Γράψτε ένα πρόγραμμα που δημιουργεί έναν πίνακα με 100 τυχαίους αριθμούς κινητής υποδιαστολής στο διάστημα [0, 1] και, χρησιμοποιώντας την παραπάνω συνάρτηση, υπολογίζει και εκτυπώνει τον μέσο όρο και την τυπική απόκλιση των τιμών τους. Χρησιμοποιήστε ως σπόρο της γεννήτριας ψευδοτυχαίων αριθμών το χρόνο του συστήματος. Βοήθεια: Αν έχουμε πραγματικούς αριθμούς στο διάστημα [0, a], τότε με διαίρεση κάθε αριθμού με το a (τη μέγιστη τιμή) τους μετασχηματίζουμε στο διάστημα [0, 1].

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 100

float mesosoros(float array[]);
float apoklish(float array[], float mo);

int main() {
    float array[SIZE];
    float mo, apo;
    int i;

    /* Sporos gennitrias tyxaiwn arithmwn */
    srand(time(NULL));

    /* Gemisma pinaka me tyxaies times sto [0,1] */
    for (i = 0; i < SIZE; i++) {
        array[i] = (float) rand() / RAND_MAX;
    }

    /* Ypologismos mesos orou kai typikis apoklishs */
    mo = mesosoros(array);
    apo = apoklish(array, mo);

    /* Emfanisi apotelesmatwn */
    printf("Mesos oros: %f\n", mo);
    printf("Typiki apoklish: %f\n", apo);

    return 0;
}

float mesosoros(float array[]) {
    float sum = 0;
    int i;

    for (i = 0; i < SIZE; i++) {
        sum += array[i];
    }

    return sum / SIZE;
}

float apoklish(float array[], float mo) {
    float sum = 0;
    int i;

    for (i = 0; i < SIZE; i++) {
        sum += pow(array[i] - mo, 2);
    }

    return sqrt(sum / SIZE);
}
