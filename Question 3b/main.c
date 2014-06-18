//
//  main.c
//  Question 3b
//
//  Created by Aidan Law on 18/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int i;
    int array[10]={10,9,8,7,6,5,4,3,2,1};   //where #10 is in the 0 position, #9 in the 1 position...
    
    i=0;                                    //set i to 0
    do                                      //enter loop without checking parameters
    {
        i++;i++;                            //if i==00 then i++;i++; would make i==2
        printf("%d %d\n", i, array[i]);     //prints the value for i and then the value held in the array at the i position e.g. i==2 then array[i]==8
    }                                       //the \n prints a new line after two values have been printed
    while(i<=6);                            //tells the loop to execute again as long as i is less than or euqal to 6
    
    printf("\n");                           //prints new line
    
    while(i<=6)                             //only starts the loop if the i variable is less than or equal to 6
    {
        i++;i++;                            //takes the current value of i and adds 2
        printf("%d %d\n", i, array[i]);     //prints the value for i and then the value held in the array at the i position e.g. i==8 then array[i]==2
    }

    return 0;
}

