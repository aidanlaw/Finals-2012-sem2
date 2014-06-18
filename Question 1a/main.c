//
//  main.c
//  Question 1
//
//  Created by Aidan Law on 18/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define PI  3.14159

int main(void)
{
    /* define the required variables */
    int length;
    float ext_diam, int_diam,ext_rad, int_rad;
    float area, volume, mass;
    const float density = 8030;                                     //"constant" should be "const"
    
    /* prompt and get values */
    
    printf("input the external diameter of the pipe in metres: ");
    scanf("%f", &ext_diam);
    printf("input the internal diameter of the pipe in metres: ");
    scanf("%f", &int_diam);
    
    /* do calculations - area of the pipe cross-section, volume
     ** of pipe and mass of pipe */
    
    ext_rad = ext_diam / 2.0;
    int_rad = int_diam / 2.0;
    area = (PI * ext_rad * ext_rad) - (PI * pow(int_rad,2));        //"power" should be "pow"
    for(length=1;length<=10;length++)
    {                                                               //replace the opening curly-wurly
        volume = area * (float)length;
        mass = volume * density;
        printf("The mass of the pipe of length %dm is %.2fkg\n",length,mass);
    }
    
    
    return 0;
}