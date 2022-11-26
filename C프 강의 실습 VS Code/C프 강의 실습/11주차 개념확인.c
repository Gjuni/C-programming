#include <stdio.h>
#include <string.h>

typedef struct country
{
    char name[50];
    char country[50];
    int population;
} infoCountry;


int main(void)
{
    infoCountry arr[3];

    printf("Input three cities: \n");

    for(int i =0; i<3; i++)
    {
        fputs("Name : ", stdout);
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        arr[i].name[strlen(arr[i].name)-1]= 0;

        fputs("Country : ", stdout);
        fgets(arr[i].country, sizeof(arr[i].country), stdin);
        arr[i].country[strlen(arr[i].country)-1]=0;
        
        fputs("Population : ", stdout);
        scanf(" %d", &arr[i].population);
        getchar();
    }

    fputs("Printing the three cities:",stdout); printf("\n");
    for(int i =0; i<3; i++)
    {
        
        printf("%d : %s in %s with a population of %d people \n", i+1 ,arr[i].name, arr[i].country, arr[i].population);
    }
    return 0;
}