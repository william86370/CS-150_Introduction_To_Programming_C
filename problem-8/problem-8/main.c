//
//  main.c
//  Homeowork 4
//
//  Created by Zachary Chavez on 12/6/18.
//  Copyright © 2018 Zachary Chavez. All rights reserved.
//

#include <stdio.h>
struct Student {
    int grades[5];
    char Firstname[50];
    char Lastname[50];
};

int main(void) {
    char line[256];
    char filename[] = "StudentGrades.txt";
    FILE *file = fopen(filename, "r");
    int count =0;
    struct Student students[5];
    if ( file != NULL )
    {
        while (fgets(line, sizeof line, file) != NULL)//read the file line by line
        {
            if(count>1){
                int grades[5];
                sscanf(line, "%s %s %d %d %d %d %d",students[count-2].Firstname,students[count-2].Lastname,&grades[0],&grades[1],&grades[2],&grades[3],&grades[4]);
                for(int i =0;i<5;i++){
                    students[count-2].grades[i]=grades[i];
                }
            }
            count++;
        }
        //the file contained more info then needed
        fclose(file);
    }
    else
    {
     printf("Couldnt Find The file contaiing the student Grades\n");
    }
    int i, j, temp_total, high, low;
    int n[5][5];
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            n[i][j] = students[i].grades[j];
        }
    }
    
    for (i = 0; i < 5; i++) {
        printf("Total and average score for student %s %s: ",students[i].Firstname,students[i].Lastname);
        temp_total = 0;
        for (j = 0; j < 5; j++) {
            temp_total += n[i][j];
        }
        printf("%d %.2f\n", temp_total, (double) temp_total / 5);
    }
    
    printf("\n");
    
    for (i = 0; i < 5; i++) {
        printf("\nAverage, high and low scores for quiz %d: ", i + 1);
        temp_total = 0;
        high = low = n[0][i];
        
        for (j = 0; j < 5; j++) {
            temp_total += n[j][i];
            if (n[j][i] > high)
                high = n[j][i];
            if (n[j][i] < low)
                low = n[j][i];
        }
        printf("%f %d %d", (double) temp_total / 5, high, low);
    }
    
    printf("\n");
    
    
    return 0;
}

