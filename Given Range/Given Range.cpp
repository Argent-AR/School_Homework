// Given Range.cpp : This file contains the 'main' function. Program execution begins and ends there.
// To Print Given Number of Numbers From 1

#include <iostream>

int main()
{
    int i = 1, n;
    printf("How many numbers you want? ");
    scanf_s("%d", &n);
    while (i <= n)
    {
        printf("%d\t", i);
         
        i++;
    }
}
