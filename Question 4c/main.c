//
//  main.c
//  Question 4c
//
//  Created by Aidan Law on 18/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

#define SIZE 10

int main(void)
{
    int n[SIZE] = {19,3,15,7,11,9,13,5,17,1};
    int i,j;                                        //creates integer called i and j
    
    printf("Element\t Value\t Histogram\n");        //prints the terms on one line. the \t spaces it out evenly similar to using TAB
    
    for(i=0;i<10;i++)                               //starts a set loop that executes 10 times
    {
        j=n[i];                                     //sets the j variable as the matrix value being used for this round of execution
        printf("%d     \t %d    \t ", i, n[i]);     //prints the element value "i" and the same value taken from the matrix denoted by n[i]
        
        while (j>0)                                     //creates another loop where the *s will be printed "Loop-ception"
        {
            printf("*");                                //keeps printing * until j becomes 1 in which case the loop will exit
            j=j-1;                                      //subtracts 1 from j, similar to using i-- in a for loop
        }
        
        printf("\n");                               //prints a new line before the complete loop starts again
        
    }
        
    
    

    return 0;
}

