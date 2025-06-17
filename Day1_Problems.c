#include <stdio.h>

void checkEvenOrOdd(int num)
 {
    if (num % 2 == 0) 
    {
        printf("%d is Even\n", num);
    } 
    else 
    {
        printf("%d is Odd\n", num);
    }
}

void printNaturalNumbers(int n)
 {
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main() 
{
    int number, n;
    
    printf("Enter a number to check even or odd: ");
    scanf("%d", &number);
    checkEvenOrOdd(number);
    
    printf("Enter a number to print n natural numbers: ");
    scanf("%d", &n);
    printNaturalNumbers(n);
    
    return 0;
}