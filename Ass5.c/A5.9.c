#include<stdio.h>
#include<stdlib.h>
int scan(int *** array, int rows, int columns, int depth);
void print(int *** array, int rows, int columns, int depth);
void section(int ***array, int row, int column, int depth );




int main(){

    int row, column, depth;
    int ***arr;

    printf("Enter the dimensions of the 3D array:\n");
    scanf("%d %d %d", &row, &column, &depth);

    arr = (int***) malloc(sizeof(int**) *row);

        if (arr == NULL)
        {
            printf("1.Dynamic allocation FAIL!");
            exit(0);

        }
        

        for (int i = 0; i < row; i++)
    {
            arr[i] = (int **) malloc(sizeof(int*) * column);
                if (arr[i] == NULL)
                {
                    printf("2.Dynamic allocation FAIL!");
                    exit(0);
                }

                for (int j = 0; j < column; j++)
        {
            arr[i][j] = (int*) malloc(sizeof(int) * depth);
                if (arr[i][j] == NULL)
                {
                    printf("3.Dynamic allocation FAIL!");
                    exit(0);
                }     
        }          
    }

scan(arr, row, column, depth);
print(arr, row, column, depth);
section(arr, row, column, depth);


return 0;
}


void print(int *** array, int rows, int columns, int depth){

for (int i = 0; i < rows; i++)
    {
      printf("\n");
        for (int j = 0; j < columns; j++)
        {
      printf("\n");
      
           for (int k = 0; k < depth; k++)
            {
                printf("%d", array[i][j][k]);
            }
            
        }
        
    }
    printf("\n");
}




int scan(int *** array, int rows, int columns, int depth){

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            for (int k = 0; k < depth; k++)
            {
                scanf("%d", &array[i][j][k]);
            }
            
        }
        
    }
    printf("\n");

    print(array, rows, columns, depth);
    
return ***array;

}


void section(int ***array, int row, int column, int depth ){

    printf("Let print the sections of this array: ");
    printf("\n");
    for (int i = 0; i < depth; i++)
    {
      printf("\n");
        for (int j = 0; j < column; j++)
        {
          printf("\n");
            for (int k = 0; k < row; k++)
            {
                printf("%d", array[k][j][i]);
            }
            
        }
        
    }
printf("\n");

}