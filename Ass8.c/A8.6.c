#include<stdio.h>
#include<stdlib.h>

int main(){

    double d1, d2;
    char filename[20];
    char filename1[20];
    scanf("%s", filename);
    scanf("%s", filename1);

    FILE* fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("ERROR1\n");
        exit(1);
    }


    FILE* fptr1 = fopen(filename1, "r");
    if (fptr == NULL)
    {
        printf("ERROR2\n");
        exit(1);
    }
    fscanf(fptr, "%lf", &d1 );
    fscanf(fptr1, "%lf", &d2);

   FILE* fptr2 = fopen("results.txt", "w");
   if (fptr2 == NULL)
   {
       printf("ERROR3\n");
       exit(1);
    }

    fprintf(fptr2, "SUM : %lf\n", d1 + d2);
    fprintf(fptr2, "DIFFERENCE : %lf\n", d1 - d2);
    fprintf(fptr2, "PRODUCT : %lf\n", d1 * d2);
    fprintf(fptr2, "DIVISION : %lf\n", d1 / d2);

return 0;
   
    

}