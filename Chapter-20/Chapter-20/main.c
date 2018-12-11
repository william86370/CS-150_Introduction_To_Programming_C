//
//  main.c
//  Chapter-20
//
//

#include <stdio.h>
unsigned int f(unsigned int i, int m, int n);
int main(int argc, const char * argv[]) {
    unsigned int i,j,k;
    i = 8; j = 9;
    printf("%d\n", i >> 1 + j >> 1);

    i = 1;
    printf("%d\n", i & ~i);
    
    i = 2; j = 1; k = 0;
    printf("%d\n", ~i & j ^ k);
    
    i = 7; j = 8; k = 9;
    printf("%d\n", i ^ j & k);
    i = f(7, 8, 9);
    printf("Output of f():%u\n",i);
    
    return 0;
}
unsigned int f(unsigned int i, int m, int n)
{
    return (i >> (m + 1 - n)) & ~(~0 << n);
    //A~(~0 << n) returns a number with its rightmost n bits set to 1 and all other bits set to 0
    //The function returns a range of n bits starting from position m in i.
}
