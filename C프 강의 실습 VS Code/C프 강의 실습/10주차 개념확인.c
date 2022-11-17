// Change Upper Letter to lower letter and Lower letter to Upper letter
// 202010836
// June

#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[100];
    int len;

    printf("Input > ");
    fgets(arr, sizeof(arr) ,stdin);

    len = strlen(arr);

    for(int i =0; i<len; i++)
    {
        if((65 <= arr[i]) && (arr[i] <= 90))
        {
            arr[i] = arr[i] +32;
        }
        else if((97 <= arr[i]) && (arr[i] <= 122))
        {
            arr[i] = arr[i] - 32;
        }
    }


    printf("Output > ");
    fputs(arr, stdout);
    
    return 0;
}