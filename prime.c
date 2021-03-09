#include <stdbool.h>
#include <stdio.h>
#include<math.h>

bool is_prime(int num)
{
    if (num <= 1)
    {
        printf("false");

        return false;
    }
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            printf("false");
            return false;
        }
    }

    printf("true");
    return true;
}

int main()
{
    is_prime(1634300119);
    return 0;
}