#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char arr[50];
    char arr1[50];

printf("Enter the two strings:\n");
fgets(arr, sizeof(arr), stdin);
fgets(arr1, sizeof(arr1), stdin);

char *conc;

int n = strlen(arr1) -1  + strlen(arr) - 1 ;
printf( "Number: %d\n", n);

conc = (char*) malloc (sizeof(char) * n);

for (int i = 0; i <= strlen(arr) - 1; i++)
{
    conc[i] = arr[i];
}

for (int i = strlen(arr) - 1; i < n; i++)
{
    conc[i] = arr1[i];
}

for (int i = 0; i < n ; i++)
{
    printf("%c", conc[i]);
}

printf("\n");


return 0;
}