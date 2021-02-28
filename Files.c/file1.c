#include<stdio.h>
#include<stdlib.h>

int main(){

   // char str1[20] = "Mahmoud El Bergui 1";
    char str2[20];
    int number = 0 ;
    int n = 0;
    int n1 = 0;
   // int n = 0;

    FILE* ptr = fopen("EASY.txt", "r+");
        if (ptr == NULL)
        {
            printf("ERROR\n");
            exit(1);
        }
    fgets(str2, 20 , ptr);
    fprintf(ptr, "2 3 4", );
    fscanf(ptr,"%d", &number);
    fscanf(ptr,"%d", &n);
    fscanf(ptr ,"%d", &n1);
    printf("%d\n", number);
    printf("%d\n", n);
    printf("%d\n", n1);

    
    fclose(ptr);
        
return 0;
}














// #include <stdio.h>

// int main () {
//    FILE *fp;
//    char c = '\0';
//    char c1 = '\0';
   
//    fp = fopen("file.txt","w+");
//    fputs("This is tutorialspoint.com", fp);
  
//    fseek( fp, 0, SEEK_SET );
//    c = getc(fp);

//    fseek( fp, 1, SEEK_SET );
//    c1 = getc(fp);

//    putchar(c);
//    printf("\n");
//    putchar(c1);
//    printf("\n");

//    int sum = c + c1;
//    printf("%d\n", sum);