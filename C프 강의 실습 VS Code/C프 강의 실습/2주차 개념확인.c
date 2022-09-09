/** 2022/09/08 assingment 
 * made by : 202010836 June
*/

#include <stdio.h>

int main(void)
{
    int num1, num2 ;
    int result;

    printf("Input Two Intergers : "); 

    scanf("%d %d", &num1 , &num2 ); // Input two essence

    result = num1 & num2; // result1  AND    // 1010 (10)

    printf("%d && %d = %d\n", num1, num2, result);

    result = num1 | num2; //result2 OR       // 1111 (15)

    printf("%d | %d = %d\n", num1 ,num2, result);

    result = num1 ^ num2; //result3 NOR      // 0101 (5)

    printf("%d ^ %d = %d\n", num1, num2, result);

    return 0;
}