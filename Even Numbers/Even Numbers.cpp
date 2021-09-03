// Even Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
// To Print Given Number of Even Numbers

#include <iostream>

int main()
{
    int i = 0, in = 0, n = 1;

    printf("Enter The Number of Even Numbers You Want : ");
    scanf_s("%d", &in);

    while (n <= in)
    {
        printf("%d\t", i);
        i += 2;
        n = n + 1;
    }
}

