//
//  main.c
//  Question 4b
//
//  Created by Aidan Law on 18/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main(void)
{
//creating a test array
    
    int i;
    int m[5][5]=           {1,  2,  3,  4,  5,
                            6,  7,  8,  9,  10,
                            11, 12, 13, 14, 15,
                            16, 17, 18, 19, 20,
                            21, 22, 23, 24, 25};
    
    
// PART ONE: if m is a 5x5 matrix, which segment of this matrix will be displayed by this loop?
    
    i=0;
    while(i<5)
    {
        printf("%d ",m[1][i]);
        i++;
    }
    
    // this will print 5 integer values on the same line
    // the values will be from the 2nd row as arrays start at the 0 position
    // When using the test array, the numbers 6 7 8 9 10 will be printed
    printf("\n");
    
// PART TWO: Which segment of the matrix will be displayed by this loop?
    
    for(i=0;i<5;i++)
        printf("%d ",m[i][2]);
    
    // this will print 5 integer values on the same line
    // the values will be from the 3rd column as noted by the [2]
    // When using the test arrray, the numbers 3 8 13 18 23 will be printed
    printf("\n");
    
    

    return 0;
}

