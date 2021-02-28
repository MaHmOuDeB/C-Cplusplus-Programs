#include<stdio.h>
#include<stdlib.h>
int matrix(int n ,int arr[30][30]);
void diagonal(int n, int arr[30][30]);

int main(){

int arr[30][30];
int n;

scanf("%d", &n);

for (int i=0; i<n; i++){
for (int j=0; j<n; j++)
    {
    scanf("%d", &arr[i][j]);
    getchar();
    }
} 

printf("The entered matrix is:\n");
matrix(n,arr);
printf("\n\n");
diagonal(n,arr);

return 0;
}

int matrix(int n, int arr[30][30]){

    for(int i=0; i<n; i++)
    {
    for(int j=0; j<n; j++)
       {
        printf("%d ", arr[i][j]);
       }
    printf("\n");
    }
    return n;
}

void diagonal(int n, int arr[30][30]){


    for (int i = 0; i < n; i++)
    for (int j = 0; j < i; j++)
    {   
            printf("%d ", arr[i][j]);
        

    }
}








/*

#include <stdio.h>
#include <stdlib.h>

int m_form(int matrix[30][30], int n)
{
    printf("The entered matrix is:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", matrix[i][j]);
            // n values on each line
            // prints the rows
        }
        printf("\n");
// new line each n variables prints
// prints row after row
    }
    return n;
}

int under_main_diagonal(int matrix[30][30], int n)
{
     printf("Under the main diagonal:\n");
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<i; j++)
         {
             printf("%d ", matrix[i][j]);
// printing the values under the main diagonal means
// values for which the row index is larger than the
// column index, expressed in a for looop
         }
     }
     printf("\n");
     return n;
}
int main()
{
    int matrix[30][30];
    // getting the values
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
       for(int j=0; j<n; j++)
       {
           scanf("%d", &matrix[i][j]);
       }
    }
    // calling the function
    m_form(matrix, n);
    under_main_diagonal(matrix, n);
    return 0;
}*/
