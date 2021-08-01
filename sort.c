// Copyright 2021 jprudenc
#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
int sort(int *a, int n, int k);
void sortOut(int *a, int n);

int main() {
    int k = 0,  n, data[NMAX];
    input(data, &n);
    sort(data, n, k);
    sortOut(data, n);
    return 0;
}

int input(int *a, int *n) {
    if (fscanf(stdin, "%d", n) == 0) {
        fprintf(stdout, "n/a");
    } else {
        for (int *p = a; p - a < *n; p++) {
            if (fscanf(stdin, "%d", p) == 0) {
                fprintf(stdout, "n/a");
                return 0;
            }
        }
    }
    return *a;
}

int sort(int *a, int n, int k) {
    for (int i = 1; i < n; i++) {
        k = i;
        while (k > 0 && a[k - 1] > a[k]) {
            int tmp = a[k - 1];
            a[k - 1] = a[k];
            a[k] = tmp;
            k -= 1;
        }
    }
    return *a;
}

void sortOut(int *a, int n) {
    for (int h = 0; h < n; h++) {
        fprintf(stdout, " %d", a[h]);
    }
}

