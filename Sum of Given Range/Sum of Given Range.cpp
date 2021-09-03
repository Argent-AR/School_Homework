// Sum of Given Range.cpp : This file contains the 'main' function. Program execution begins and ends there.
// To Print Sum of Given Number of Given Numbers

#include <iostream>

int main()
{
    int i = 1, n, num, sum = 0;
    printf("How many numbers do you want to add ? ");
    scanf_s("%d", &n);
    while (i <= n)
    {
        printf("Enter Number %d ", i);
        scanf_s("%d", &num);
        sum = sum + num;
        i++;
    }
    printf("Sum of the numbers is %d ", sum);
}
