#include "data_process.h"

#include <math.h>

#include "../data_libs/data_stat.h"

int normalization(double *data, int n) {
    int result = 1;
    double max_value = max(data, n);
    double min_value = min(data, n);
    double size = max_value - min_value;

    if (fabs(size) > EPS) {
        for (int i = 0; i < n; i++) {
            data[i] = data[i] / size - min_value / size;
        }
    } else {
        result = 0;
    }

    return result;
}

int sort(double *a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = (n - 1); j > i; j--) {
            if (a[j - 1] > a[j]) {
                double _switch = a[j - 1];
                a[j - 1] = a[j];
                a[j] = _switch;
            }
        }
    }
    return 0;
}