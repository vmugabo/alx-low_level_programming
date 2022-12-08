#include <stdio.h>

int is_palindrome(int n)
{
    int m = n;

    int rev = 0;
    while (n > 0)
    {
        int d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }

    return m == rev;
}

int main()
{
    int max_palindrome = 0;

    for (int i = 100; i <= 999; i++)
    {
        for (int j = 100; j <= 999; j++)
        {
            int product = i * j;

            if (is_palindrome(product) && product > max_palindrome)
            {
                max_palindrome = product;
            }
        }
    }

    printf("%d", max_palindrome);

    return 0;
}
