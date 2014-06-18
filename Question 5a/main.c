//
//  main.c
//  Question 5a
//
//  Created by Aidan Law on 18/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(void)
{
    int v;                  //this will act as the velocity in the loop
    float cd, a, f;         //where cd=drag coefficient, a=area, f=force
    const float p = 1.23;   //sets a constant float called "p" at 1.23
    
    printf("Input a value for the area: ");
    scanf("%f", &a);
    printf("\nInput a value for the drag coefficient: ");
    scanf("%f", &cd);
    printf("\n\nVelocity\tForce\n");            //the "\t" is similar to using a TAB to space things out nicely
    
    for(v=0;v<=40;v+=5)                         //starts a loop at velocity==0m/s and adds 5m/s with each loop until >40 is reached
    {
        f = 0.5 * cd * a * p * pow(v,2);        //general equation, having (1/2) instead of (0.5) seemed to stuff it up
                                                //v^2 is shown as pow(velocity,squared)  can probably get away with "v*v" too
        printf("%dm/s     \t%.2fN\n", v, f);    //prints related values on one line with 2 decimal digits being printed in every case for the force variable
        
    }
    

    
    
    
    return 0;
}

