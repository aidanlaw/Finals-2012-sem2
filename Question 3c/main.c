//
//  main.c
//  Question 3c
//
//  Created by Aidan Law on 18/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(void)
{
    int num, ans=1;
    
    printf("Program to compute the factorial of an integer number\n");
    printf("Enter an integer number: ");
    scanf("%d", &num);          //wait for user input
    printf("\n%d! = ", num);    // starts a new line and prints the "input of the user"! =

    
    while (num>0)               //as long as num is over 0, the loop will keep going
    {
        printf("%d ", num);     //prints the variable num
        ans = ans * num;        //multiplies the ans by the number (ans is set to ==1)
        num--;                  //tells the num variable to subtract one
        if(num>=1)              //another loop that will print the "x" character as long as num is greater than or equal to 1
        {
            printf("x ");       //This loop makes sure an x is not planted after the last number "1"
        }
        
    }
    
    printf("= %d\n", ans);      //prints the final answer once the loop has finished
    

    return 0;
}

