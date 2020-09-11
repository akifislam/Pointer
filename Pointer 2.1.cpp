#include<stdio.h>
int main() {
    int x = 10;
    int *p;

    p = &x;

    printf("*p = %d\n",*p); //10
    printf("Value of p is %p\n",p);

    // %d prints values
    // %p prints address

    return 0;

}
