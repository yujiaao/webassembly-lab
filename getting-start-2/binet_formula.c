//http://www.maths.surrey.ac.uk/hosted-sites/R.Knott/Fibonacci/fibFormula.html
#include<stdio.h>
#include<math.h>
#include<time.h>

int fib(n) {
  double sqrt5=sqrt(5);
  double Phi=(sqrt5+1)/2;
  double phin=pow(Phi,n);
  int sign=1;
  if(n%2==1) sign=-1;
  return (int)((phin - sign/phin)/sqrt5);
  //  return round((phin - sign/phin)/sqrt5);

}

int main() {
    clock_t start, stop;
    int i;
    start = clock();

    printf("%d\n", fib(40));
    
    stop = clock();

    printf("%6.3fs\n", (float)(stop - start) / CLOCKS_PER_SEC);

    return 0;
}