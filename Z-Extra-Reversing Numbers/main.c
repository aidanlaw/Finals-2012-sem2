//
//  main.c
//  Z-Extra-Reversing Numbers
//
//  Created by Aidan Law on 18/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main()
{
    int n, reverse = 0;
    
    printf("Enter a number to reverse: ");
    scanf("%d",&n);
    
    while (n != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + n%10;
        n = n/10;
    }
    
    printf("\nReverse of entered number is = %d\n", reverse);
    
    return 0;
}