//
//  main.c
//  Question 5b
//
//  Created by Aidan Law on 18/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main()
{
    FILE *fp;
    
    float input[100];
    int i, number;
    
    printf("The following program takes the values held inside input.txt and prints the float values\n\n");
    
    fp = fopen("input.txt", "r");
    
    if(fp == NULL)
    {
        printf("*!*File does not exist*!*\n\n");
    }
    
    else
    {
        
        fscanf(fp,"%d", &number);
        
        for(i=0; i<number; i++)
        {
            fscanf(fp,"%f", &input[i]);
            //printf("%f")
        }
        
        fclose(fp);
    }
    
    return 0;
}

