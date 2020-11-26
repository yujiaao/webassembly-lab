#include<stdio.h>
#include<time.h>

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);
}

int main()
{
    clock_t start, stop;
    int i;
    start = clock();

    printf("%d\n", fib(40));
    
    stop = clock();

    printf("%6.3fs\n", (float)(stop - start) / CLOCKS_PER_SEC);

    return 0;
}