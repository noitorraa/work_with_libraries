#include "data_stat.h"

#include <math.h>
#include <stdio.h>

double max(double *a, int n) {
    double max = -INFINITY;
    for (int i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

double min(double *a, int n) {
    double min = INFINITY;
    for (int i = 0; i < n; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    return min;
}

double mean(double *a, int n) {
    double summ = 0;
    for (int i = 0; i < n; i++) {
        summ += a[i];
    }
    return (summ / n);
}

double variance(int n) { return ((n * n) - 1) / 12.0; }