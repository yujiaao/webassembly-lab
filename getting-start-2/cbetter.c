#include <stdio.h>
int main() {
    int f1 = 1,f2 = 1;
    int i;
    for (int i = 1; i<=20; i++) {	//结束条件
        printf("%12d %12d",f1,f2);
        if(i%2 == 0) printf("\n");	//if语句作用是使输出4个数后换行
        f1 = f1+f2;
        f2 = f2+f1;
    }
    return 0;
}
