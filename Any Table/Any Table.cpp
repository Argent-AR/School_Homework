// Any Table.cpp : This file contains the 'main' function. Program execution begins and ends there.
// To Print Any Table Upto Any Nuber of Multiples.

#include <iostream>

int main()
{
    int i = 1, n;

    printf("Enter The Number of Multiples You Want ?");
    scanf_s("%d", &n);

    printf("Enter The Table You Want ?");
    scanf_s("%d", &n);

    while (i <= n)
    {
        printf("5   X   %d  =  %d\n", i, 5 * i);
        i++;
    }
}

