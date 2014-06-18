//
//  main.c
//  Question 2
//
//  Created by Aidan Law on 18/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

/* In Mathematics, the Fibonacci number series have the following
 form; 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...
 By definition, the first two Fibonacci numbers are 0 and 1, and each
 subsequent number is the sum of the previous two numbers. This
 program computes the first n Fibonacci sequence where n is inputted
 from the terminal. */

int main ()
{
    int n;
    
    printf("How many numbers of the sequence would you like? ");
    scanf("%d",&n);
    
    /* Here we call the fibonacci function */
    fibonacci(n-1);
    
    return 0;
}

int fibonacci(int n)
{
    // The variable "a" should be = 0 not =1 otherwise sequence will not show the 0
    // e.g. a=1 becomes 1,1,2,3
    // e.g. a=0 becomes 0,1,1,2
    int a = 0;  // initiialise first number of the fibonacci sequence
    int b = 1;  // initialise second number of the fibonacci sequence
    int sum = 0;
    int i;
    
    for (i=0;i<=n;i++)      //Originally i<n suggests stopping on one less iteration than entered by the user
        //Setting to i<=n allows the correct amoun of iterations
    {
        printf("%d\n",a);
        sum = a + b;        //Originally sum=a*b should be sum=a+b
        a = b;
        b = sum;
    }
    
    return 0;
}
