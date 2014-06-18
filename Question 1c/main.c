//
//  main.c
//  Question 1c
//
//  Created by Aidan Law on 18/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    //the following variables were used to test
    int size=5;
    int x_size=3,y_size=3;
    
//  i
    
   printf("%f\n",minimum_function(x,y));
                //  illegal
                //just don't like the look of it
                //  as it prints a float value taken from the x,y coordinates of an array without []
    
    
    
//  ii
    
    int size; float vector(size);
                //  illegal
                //  as it is trying to create a float array called vector with rounded brackets
                //  needs to be with square brackets for an array
    int size; float vector[size];
    
    
    
//  iii
    
    char response = "n";
                //  illegal
                //  as it creates a character variable char known as response
                //  anytime the response variable is printed, the character "n" will be presented
                //  but it needs to have [number] to show the amount of characters needed to handle
                //example
    char response[3] = "n";
    printf("%s\n", response);
    
    
    
//  iv
    
    float pressure$reading=0.0023;
                //  legal
                //  Thought you could not have symbols like $ in a variable name
                //  but this threw back no errors
    printf("%f", pressure$reading);
    
    
    
//  v
    
   unsigned char image[x_size,y_size];
                //  illegal as it should be
    
    
    
//  Possibly, I don't know
    
    


    return 0;
}

