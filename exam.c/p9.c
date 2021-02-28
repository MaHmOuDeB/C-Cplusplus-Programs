#include<stdio.h>
#include<stdlib.h>


int main(){
    int row;
   
    int col;
    



    int **ptr;

    ptr = (int**) malloc(sizeof(int) * row);
        for (int j = 0; j < col; j++)
        {
           scanf("%d", &ptr[row][col]);
        }

      int i = 0, j = 0;  
      int value;

        while (i < row && j < col)
        {
            scanf("%d %d %d", &i, &j, &value);
            ptr[i][j] = value;
        }
        
        
return 0;
}

void print_matrix(int **A, int rows, int columns){

    for
}

// int arr[20];

// arr[0] = 1;
// arr[9] = 2;

// for (int i = 0; i < 20; i++)
// {
//     printf("%d\n", arr[i]);
// }



// }
