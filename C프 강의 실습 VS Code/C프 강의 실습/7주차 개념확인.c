// use array to compare 5 odd / even number 
// 202010836
// June

#include <stdio.h>

int main(void)
{
    int integers[5];

    printf("please input five number : ");

    for(int i =0; i< 5; i++)
    {
        scanf("%d", &integers[i]);
    }

    printf("Odd Number : ");
    for(int i =0; i<5; i++)
    {
        if(integers[i]%2 != 0)
        {
            printf("%3d", integers[i]);
        }
    }

    printf("\nEven Number : ");
    for(int i =0; i<5; i++)
    {
        if(integers[i]%2 == 0)
        {
            printf("%3d", integers[i]);
        }
    }

    return 0;
}