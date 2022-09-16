/** 2022/09/15 
 *  202010836
 *  June
*/

// input km float(double) type to transform 'Mile'
// 1 mile = 1.609 km 
// 1km = 1/1.609  = 1000/1609

#include <stdio.h>

int main(void)
{
    double meter;
    double result;

    printf("input km(decimal point) : ");
    scanf("%lf", &meter);

    result = meter*1/1.609;

    //result = meter*1000/1609

    printf("\nTransform km to mile : %.1f\n", result);


    return 0;
}