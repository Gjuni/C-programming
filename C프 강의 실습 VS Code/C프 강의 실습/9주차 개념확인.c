// Standard Deviation
// 202010836
// June

#include <stdio.h>
#include <math.h>

void StandardDeviation(int arr[])
{   
    float average;
    float xm;
    float result;
    int i;

    // solve average m
    for(i=0; i<5; i++)
    {
        average += arr[i];
    }
    average = average/5;

    // solve (x-m)^2 / 5
    for(i=0; i <5; i++)
    {
        xm += pow((arr[i]-average),2);
    }
    xm = xm/5;

    // root
    result = sqrt(xm);

    printf("Standard Deviation : %.3f", result);

}


int main(void)
{
    int arr[5];

    printf("input 5 number : ");

    for(int i =0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    StandardDeviation(arr);

    return 0;
}