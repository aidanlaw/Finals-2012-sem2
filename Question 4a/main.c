//
//  main.c
//  Question 4a
//
//  Created by Aidan Law on 18/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    char material[9]="Limecrete";                               //error was the [8] should have been [9] to hold all the characters of "Limecrete"
    
    printf("%c %c %c\n", material[2],material[4],material[6]);
    material[0]='S';
    material[1]='h';
    material[2]='o';
    material[3]='t';
    printf("%s\n", material);
                                /*
                                 prints out the following
                                 
                                 m c e
                                 Shotcrete
                                 
                                 Why?  Because it does
                                 */
    //system("pause");      had to comment this commandline because I didn't like what it looked like when I ran it


    return 0;
}

