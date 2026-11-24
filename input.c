#include <stdio.h>

void wczytaj_probe(int proba[4]) {
    char wpis[5];
    printf("Podaj 4 cyfry: ");
    scanf("%4s", wpis);

    for (int i = 0; i < 4; i++) {
        proba[i] = wpis[i] - '0';
    }
}
