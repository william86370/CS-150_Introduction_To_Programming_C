//
//  main.c
//  Chapter-13
//
//  Created by william wright on 12/10/18.
//  Copyright © 2018 Silvertap. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int m, d, y;
    char *months[12] = {"January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November",
        "December"};
    
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &m, &d, &y);
    printf("You entered the date %s %.2d, %d\n", months[m-1], d, y);
    return 0;
}
