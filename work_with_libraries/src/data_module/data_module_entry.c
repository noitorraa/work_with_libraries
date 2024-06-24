#include <stdio.h>

#include "../data_libs/data_io.h"
#include "data_process.h"

int main() {
    double *data = 0;
    int n = 0;

    if (input(&data, &n) == 0) {
        if (normalization(data, n)) {
            output(data, n);
            free(data);
        } else {
            printf("ERROR");
        }
    } else {
        printf("n/a");
    }
    return 0;
}
