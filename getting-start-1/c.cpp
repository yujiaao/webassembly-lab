#include <ctime>
#include <iostream>

using std::cout;

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);
}


int main(){
    int t1= clock();
    cout << fib(40) << '\n';
    int t2 = clock();
    cout << (float)(t2-t1)/CLOCKS_PER_SEC <<"s" << '\n';
    return 0;
}

