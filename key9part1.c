// Copyright 2021 jprudenc

#include <stdio.h>
#include <stdlib.h>

#define NMAX 10

void input (int *buffer, int *length);
void output (int *buffer, int *length);
int sum_numbers(int *buffer, int *length);
int find_numbers(int* buffer, int *length, int number, int *numbers);

int main() {
    int n = 0;
    int array[NMAX];
    int array2[NMAX];

    input(array, &n);
    output(array, &n);
    find_numbers(array, &n, 8, array2);
    return 0;
}

void input (int *buffer, int *length) {
    if (scanf("%d", length) == 0){
        printf("n/a");    
    } else if (*length > NMAX) {
        printf("n/a");
    } else {
        for (int i = 0; i < *length; i++) {
            scanf("%d", &buffer[i]);
        }
    }
}

void output(int *buffer, int *length) {
    if ((*length != 0) && (*length <= NMAX)) {
        for (int i = 0; i < *length; i++) {
                printf("%2d", buffer[i]);
        }
        
        printf("\n%d\n", sum_numbers(buffer, length));
    } else {
        printf("n/a");
    }
}

int sum_numbers(int *buffer, int *length) {
	int sum = 0;
    if (*length > NMAX) {
        printf("n/a");
    } else {
	    for (int i = 0; i < *length; i++) {
		    if (buffer[i] % 2 == 0)
			    sum = sum + buffer[i];
	    }
    }
	return sum;
}

int find_numbers(int *buffer, int *length, int number, int *numbers) {
    int a = 0;
    for (int i = 0; i < *length; i++) {
        if (8 % buffer[i]) {
           // *numbers = buffer[i];
            printf(" %d", buffer[i]);
        } 
    }
    return a;
}
