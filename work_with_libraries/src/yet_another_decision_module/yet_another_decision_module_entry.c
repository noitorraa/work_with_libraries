#include <stdio.h>

#include "decision.h"
int main() {
    double data[5];
    int n = 5;
    for (int i = 0; i < 5; i++) {
        data[i] = 1.0;
    }
    if (make_decision(data, n))
        printf("YES");
    else
        printf("NO");
    return 0;
}
