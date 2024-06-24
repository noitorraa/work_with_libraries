#include "data_io.h"

#include <stdio.h>
#include <stdlib.h>

int input(double **data, int *n) {
    int flag = 0;
    printf("Напишите сколько чисел будешь вводить: ");
    if (scanf("%d", n) == 1 && getchar() == '\n') {
        *data = (double *)malloc(*n * sizeof(double));
        if (data == NULL) {
            flag = 1;
            return 1;
        }
        for (int i = 0; i < *n; i++) {
            if (scanf("%lf", &(*data)[i]) != 1) {
                flag = 1;
            }
        }
    } else {
        flag = 1;
    }
    return flag;
}

void output(double *a, int n) {
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%.2lf", a[i]);
            break;
        }
        printf("%.2lf ", a[i]);
    }
}
