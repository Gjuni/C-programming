/** 2022/09/22 assingment
 *  202010836
 *  June
*/


#include <stdio.h>


int main(void)
{
    int roup;
    int star;
    int space;

    for(roup = 0; roup < 5; roup ++)
    {
        for(space = 5; space > roup; space--)
        {
            printf(" ");
        }
        for(star = 0; star < roup*2+1; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}