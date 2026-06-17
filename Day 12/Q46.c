#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    int sum = 0, temp = n, digits = 0, rem;

    // Count digits
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate sum of digits raised to the power of digits
    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}