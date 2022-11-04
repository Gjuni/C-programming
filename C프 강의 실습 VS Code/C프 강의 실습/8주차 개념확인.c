// determine arr1 / arr2
// interchange arr1 to arr2 & arr2 to arr1
//202010836
//June

#include <stdio.h>

int main(void)
{
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[6] = {7,8,9,10,11,12};

    int *ptr1 = arr1; 
    int *ptr2 = arr2;
    int interchange;

    //print arr1 & arr2
    printf("arr1 : ");
    for(int i =0; i < 6; i++)
    {
        printf(" %2d", arr1[i]);
    }
    printf("\narr2 : ");
    for(int i =0; i<6; i++)
    {
        printf(" %2d", arr2[i]);
    }

    printf("\n\nafter swap\n");

    // interchange arr1 to arr2 and print arr1
    printf("arr1 : ");
    for(int i =0; i < 6; i++)
    {
        interchange = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = interchange;

        printf(" %2d", arr1[i]);

        ptr1 ++;
        ptr2 ++;
    }

    // print arr2
    printf("\narr2 : ");
    for(int i =0; i < 6; i++)
    {
        printf(" %2d", arr2[i]);
    }

    return 0;
}


// another solution

int main2(void)
{
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[6] = {7,8,9,10,11,12};

    int *ptr1 = arr1;
    int *ptr2 = arr2;

    printf("Second solution\n\n"); // Use pointer Value

    printf("arr1 : ");
    for(int i =0; i < 6; i++)
    {
        printf(" %2d", arr1[i]);
    }
    printf("\narr2 : ");
    for(int i =0; i < 6; i++)
    {
        printf(" %2d", arr2[i]);
    }

    printf("\n\nafter swap\n");

    printf("arr1 : ");
    for(int i =0; i < 6; i++)
    {
        *ptr1 += 6;
        printf(" %2d", *ptr1);
        ptr1++;
    }

    printf("\narr2 : ");
    for(int i =0; i< 6; i++)
    {
        *ptr2 -= 6;
        printf(" %2d", *ptr2);
        ptr2++;
    }
    return 0;
}