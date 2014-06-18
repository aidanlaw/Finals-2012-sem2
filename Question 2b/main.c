//
//  main.c
//  Question 2b
//
//  Created by Aidan Law on 18/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(void)
{
    const int setb=1, setr=2, seto=3, sety=4;
    int coloura = 0, ans = 0;
    char inputa, inputb, inputc;
    
    printf("Enter the first letter of the colour of band A: ");
    scanf("%s", &inputa);
    
    switch (inputa)
    {
            
        case 'b':
            coloura = setb * 10;
        break;
            
        case 'r':
            coloura = setr * 10;
        break;
            
        case 'o':
            coloura = seto * 10;
        break;
            
        case 'y':
            coloura = sety * 10;
        break;
            
    }

    
    printf("\nEnter the first letter of the colour of band B: ");
    scanf("%s", &inputb);
    
    switch (inputb)
    {
            
        case 'b':
            coloura = coloura + setb;
        break;
            
        case 'r':
            coloura = coloura + setr;
        break;
            
        case 'o':
            coloura = coloura + seto;
        break;
            
        case 'y':
            coloura = coloura + sety;
        break;
            
    }
    
    
    printf("\nEnter the first letter of the colour of band C: ");
    scanf("%s", &inputc);
    
    switch (inputc)
    {
            
            case 'b':
                ans = coloura * pow(10,setb);
            break;
            
            case 'r':
                ans = coloura * pow(10,setr);
            break;
            
            case 'o':
                ans = coloura * pow(10,seto);
            break;
            
            case 'y':
                ans = coloura * pow(10,sety);
            break;
            
    }

    printf("\nThe resistor value is: %d O-bangers\n\n", ans);
    
    
    return 0;
}

