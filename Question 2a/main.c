//
//  main.c
//  Question 2a
//
//  Created by Aidan Law on 18/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int x, y;
    
    printf("Enter a value for the x coordinate: ");
    scanf("%d", &x);
    printf("\nEnter a value for the y coordinate: ");
    scanf("%d", &y);
    printf("\n");                                           // This keeps it lookin fresh to death
    
    if(x==0 && y==0)                                        //  && suggests that both arguments must be met
        printf("The point lies on the origin\n");
    
    else if(x==0 || y==0)                                        // || suggests that either argument must be met
        printf("The point lies on either the x or y axis\n");
    
    else if(x>0 && y>0)
        printf("Point is within QI\n");
    
    else if(x>0 && y<0)
        printf("Point is within QIV\n");
    
    else if(x<0 && y<0)
        printf("Point is within QIII\n");
    
    else if(x<0 && y>0)
        printf("Point is within QII\n");
    else
        printf("You dun goofed\n");
    
    return 0;
}

