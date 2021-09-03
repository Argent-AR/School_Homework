// 1 to 10 Numbers And Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Program To Print Numbers From 1 to 10

#include <iostream>

int main()
{
    int i = 1, sum = 0;
    while (i <= 10)
    {
        printf("%d\t", i);
        i++;
        sum = sum + i;
    }
    printf(" \n \nSum of The Numbers is : %d", sum);
}
