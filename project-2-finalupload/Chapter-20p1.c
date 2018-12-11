//
//  main.c
//  chapter-20-project1
//


#include <stdio.h>
union {
    float value;
    struct float_value {
        unsigned int fraction: 23;
        unsigned int exponent: 8;
        unsigned int sign: 1;
    } field;
} f;
int main(int argc, const char * argv[]) {
    f.field.sign = 1;
    f.field.exponent = 128;
    f.field.fraction = 0;
    
    printf("%.1f\n", f.value);
    return 0;
}
