//
//  main.c
//  Question 3a
//
//  Created by Aidan Law on 18/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    
//  i
    
    // for loops are used when the reuirements must be met before entering the loop
    // the loop is also run for a set amount of times
    // useful to limit the amount of items being stored in a file if the file has an upper limit
    //e.g.
    // if  a file can only hold 10 integers you can set the loop to only run 10 times and store a value each time into the array
    // the following is a for loop running 10 times before exiting (it does not place the values in an array in this case)
    
    for(i=1; i>=10; i++)
    {
        printf("%d\n", i);
    }

    
    
//  ii
    
    // do-while loops are used when you want the loop to run at least once before exiting even if the execution fails
    // it is also useful when the loop must continue for an unknown amount of times
    //e.g.
    // The following do loop shows how the loop will keep printing back what the user has input as long as the input is greater than 0
    // The program will print an input that is less than 0 but will exit the loop instead of starting again
    
    do
    {
        scan_number_input_by_user;
        printf("%f", num);
    }
    while(input > 0)

    
    return 0;
}

