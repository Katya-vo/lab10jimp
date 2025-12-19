#include <stdio.h>
#include "../src/gauss.h"

int main() {
    int n = 3;

    double A[3][3] = {
        { 2, 1, -1 },
        { -3, -1, 2 },
        { -2, 1, 2 }
    };

    double b[3] = { 8, -11, -3 };

    gaussian_elimination(n, A, b);

    printf("Po eliminacji Gaussa:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%8.3f ", A[i][j]);
        }
        printf("| %8.3f\n", b[i]);
    }

    return 0;
}
