#include<stdio.h>
void matrix(int n, int arr[30][30]);
void Under_second_diag(int n, int arr[30][30]);

int main(){

    int n, arr[30][30];
    
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
        
    }
    matrix(n, arr);
    printf("\n");
    Under_second_diag(n,arr);
    printf("\n\n");
  return 0;  
}

void matrix(int n, int arr[30][30]){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}

void Under_second_diag(int n, int arr[30][30]){


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j + i >= n )
            {
                printf("%d ", arr[i][j]);
            }
            
            
        }
        
    }
    


}