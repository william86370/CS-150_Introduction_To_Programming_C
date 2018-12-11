//
//  main.c
//  chapter-9
//
//  Created by william wright on 12/10/18.
//  Copyright © 2018 Silvertap. All rights reserved.
//
#include <stdbool.h>
#include <stdio.h>
bool has_zero(int a[], int n);
double median(double x, double y, double z);
int main(int argc, const char * argv[]) {
    int n =10;
    int a[]= {2,2,2,2,0,2,2,2,2,2};
   bool x = has_zero(a,n);
    printf("%s\n", x ? "true" : "false");
     n =10;
     int b[]= {2,2,2,2,2,2,2,2,2,2};
     x = has_zero(b,n);
    printf("%s\n", x ? "true" : "false");
   printf("%f\n",median(1.2, 6.7, 3.6));
    printf("%f\n",median(100.567, 100.568, 100.565));
    return 0;
}
bool has_zero(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == 0) {
            return true;
        }
    }
    return false;
}
double median(double x, double y, double z) {
    
    double middle = x;
    if ((x >= y && z <= y) || (z >= y && x <= y))
        middle = y;
    else if ((x >= z && y <= z) || (y >= z && x <= z))
        middle = z;
    return middle;
    }
