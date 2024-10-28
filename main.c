#include <stdio.h>

void sommReciproco(int nTotale , float *sumReciproco);

int main(void) {

    int nTotale;
    float sumReciproco;

    printf("Inserisci il numero totale: \n");
    scanf("%d", &nTotale);

    sommReciproco(nTotale , &sumReciproco);
    printf("SommReciproco: [%2.2f]\n", sumReciproco);

    return 0;
}

void sommReciproco(int nTotale , float *sumReciproco) {
    for (int i = 0; i < nTotale; i++) {
        float d =  i + 1.0;
        *sumReciproco = *sumReciproco + 1/d;
    }
}