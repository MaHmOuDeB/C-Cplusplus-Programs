#include<stdio.h>
#include<stdlib.h>
int matrix(int ** matrice, int row, int column);
void print(int ** matrice, int row, int column);
int multi(int **matrice,int **a, int **b, int arow, int acolumns, int bcolumn );
void matrix_product(int **matrix,int **matrix_1,int **matrix_2,int a,int b,int c);




int main(){

    int n, m, p;
    int **matrice, **matrice1, ** multiplication;

    printf("Enter the dimensions of the matrices:\n");
    scanf("%d %d %d", &n, &m, &p);

    matrice = (int**) malloc(sizeof(int *) * n);
    if (matrice == NULL)
      {
          printf("1.Memory not allocated.\n");
          exit(0);
      }
        for (int i = 0; i < n; i++)
        {
            matrice[i] = (int*) malloc(sizeof(int) * m);
            if (matrice[i]== NULL)
      {
          printf("2.Memory not allocated.\n");
          exit(0);
      }
        }

     
        


    matrice1 = (int**) malloc(sizeof(int *) * m );
    if (matrice1== NULL)
      {
          printf("3.Memory not allocated.\n");
          exit(0);
      }
        for (int i = 0; i < m; i++)
        {
            matrice1[i] = (int*) malloc(sizeof(int ) * p);
            if (matrice1[i]== NULL)
      {
          printf("4.Memory not allocated.\n");
          exit(0);
      }
        }    

    printf("print the first matrice: \n");
    matrix(matrice, n, m);
    printf("\n");
    print(matrice, n, m);
    printf("print the second matrice: \n");
    matrix(matrice1, m, p);
    printf("\n");
    print(matrice1, m, p);

multiplication = (int**) malloc(sizeof(int*) * n);
if (multiplication== NULL)
      {
          printf("5.Memory not allocated.\n");
          exit(0);
      }
    for (int i = 0; i < n; i++)
    {
        multiplication[n] = (int*) malloc(sizeof(int) * p);
        if (multiplication[i]== NULL)
      {
          printf("6.Memory not allocated.\n");
          exit(0);
      }
    }

printf("The multiplication of the two matrices:\n");

//multi(multiplication, matrice, matrice1, n, m, p);
//print(multiplication, n, p );
 matrix_product(matrice, matrice1,multiplication,n,m,p);


    for (int i = 0; i < n; i++)
{
    free(matrice[i]);
}
free(matrice);

for (int i = 0; i < m; i++)
{
    free(matrice1[i]);
}
free(matrice1);

for (int i = 0; i < n; i++)
{
    free(multiplication[i]);
}
free(multiplication);

return 0;
}

int matrix(int ** matrice, int row, int column){

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrice[i][j]);
        }
        
    }
return **matrice;
}


void print(int ** matrice, int row, int column){

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }

}

/*int multi(int **matrice,int **a, int **b, int arow, int acolumns, int bcolumn ){

for (int i = 0; i < arow; i++)
{
    for (int j = 0; j < bcolumn; j++)
    {
        matrice[i][j] = 0;
    }
    
}


for (int i = 0; i < arow; i++)
{
    for (int j = 0; j < bcolumn; j++)
    {
        for (int k = 0; k < acolumns ; k++)
        {
            matrice[i][j] += a[i][k] * b[k][j];
        }
    }
    
}

return **matrice;
}*/


void matrix_product(int **matrix,int **matrix_1,int **matrix_2,int a,int b,int c)
{
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < c; j++) {
      matrix[i][j]=0;
    }
  }
  for (int x = 0; x < a; x++)
  {
    for (int y = 0; y < c; y++)
    {
      for (int i = 0; i < b; i++)
      {
        matrix[x][y]=matrix[x][y]+matrix_1[x][i]*matrix_2[i][y];
      }
    }
  }

print(matrix, a, c);

}
  