#include <stdio.h>

#define SIZE 34

int main() {
    int a = 5;
    int b = 7;
    int D[SIZE] = {0};

    for (int i=0; i<a; i++)
        for(int j=0; j<b; j++)
          D[4*j] = i + j;

    for (int i = 0; i < SIZE; i++) {
        printf("D[%d]: %d\n", i, D[i]);
    }

    return 0;
}