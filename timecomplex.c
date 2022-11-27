#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"
     
clock_t start, end;
double timed;
const int N = 40;

int main(){
    start = clock();

    for(int i=1; i<=N; i++){
        fibonacciIterative(i);
    }

    end = clock();
    timed = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken for Iterative Fibonnaci N %d : %lfs\n", N, timed);



    start = clock();

    for(int i=1; i<N; i++){
        fibonacciRecursive(i);

    }
    end = clock();
    timed = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken for Recursive Fibonnaci N %d : %lfs\n", N, timed);

    return 0;
}
