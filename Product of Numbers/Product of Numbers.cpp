// Product of Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
// To Print 1 to 10 numbers and their product

#include <iostream>

int main()
{
    int i = 1, pro = 1, n;

    while (i <= 10)
    {
        printf("%d\t", i);
        pro = pro * i;
    }

    printf("\nProduct of the numbers is   %d  ", pro);
}
