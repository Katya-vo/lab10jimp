#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define N 3 
void wyswietlUklad(double macierz[N][N+1]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= N; j++) {
            printf("%10.2f ", macierz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    double macierz[N][N+1] = {
        { 2,  1, -1,  8},
        {-3, -1,  2, -11},
        {-2,  1,  2, -3}
    };

    double wynik[N];

    printf("Uklad wejsciowy:\n");
    wyswietlUklad(macierz);
    for (int i = 0; i < N; i++) {
        int wierszMax = i;
        for (int k = i + 1; k < N; k++) {
            if (fabs(macierz[k][i]) > fabs(macierz[wierszMax][i])) {
                wierszMax = k;
            }
        }
        for (int k = i; k <= N; k++) {
            double temp = macierz[wierszMax][k];
            macierz[wierszMax][k] = macierz[i][k];
            macierz[i][k] = temp;
        }
        if (fabs(macierz[i][i]) < 1e-12) {
            printf("Blad: Macierz jest osobliwa lub brak jednoznacznego rozwiazania.\n");
            return 1;
        }
        for (int k = i + 1; k < N; k++) {
            double wspolczynnik = macierz[k][i] / macierz[i][i];
            for (int j = i; j <= N; j++) {
                macierz[k][j] -= wspolczynnik * macierz[i][j];
            }
        }
    }
    return 0;
}
