// Trans binary number
// 202010836 June

#include <stdio.h>

int binum(int num)
{
    if(num > 1)
        binum(num/2);
        printf("%d", num%2);
    return 0;
}

int main(void)
{
    int num;
    printf("Input number to trans binary : ");
    scanf("%d", &num);

    binum(num);
    return 0;
}