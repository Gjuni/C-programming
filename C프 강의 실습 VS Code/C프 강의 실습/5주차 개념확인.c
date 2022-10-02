// 2022/09/29 assignment
// 202010836 June
// compare the prime number

#include <stdio.h>

int main(void)
{
    int prime, compare;
    int result;

    printf("Input NUmber : ");
    scanf("%d", &prime);

    for(compare = 2; compare < prime ; compare++)
    {
        result = (prime%compare);
        if(result == 0)
        {
            printf("%d is not prime number.\n", prime);
            break;
        }
    }
    if(result != 0)
    {
        printf("%d is prime number. \n", prime);
    }
    return 0;
}