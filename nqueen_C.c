#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#define N 8

int x[N];
bool sf = false;

void display(int x[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (x[i] == j) {
                printf("Q ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

bool place(int x[], int k, int n) {
    for (int i = 0; i < k; i++) {
        if (x[i] == n || abs(x[i] - n) == abs(i - k)) {
            return false;
        }
    }
    return true;
}

void nqueen(int n, int k) {
    if (sf) {
        return;
    }
    if (k == n) {
        for (int i = 0; i < n; i++) {
            printf("%d ", x[i]);
        }
        printf("\n");
        display(x, n);
        sf = true;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (place(x, k, i)) {
            x[k] = i;
            nqueen(n, k + 1);
            if (sf) {
                return;
            }
            x[k] = -1;
        }
    }
}

int main() {
    for (int i = 0; i < N; i++) {
        x[i] = -1;
    }
    nqueen(N, 0);
    return 0;
}
