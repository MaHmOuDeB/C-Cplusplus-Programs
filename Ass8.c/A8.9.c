#include<stdio.h>
#include<stdlib.h>


int main(){

    int  n;
    char name[20];
    char buffer [64];
    //char c;
    //int count = 0;
    printf("Number of files to read: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
     printf("Name of the file: ");
     scanf("%s", name);  
    
    FILE* fptr = fopen(name, "r+b");
    fread(buffer, 64, 1,  fptr);

    // while ((c = getc(fptr)) != EOF)
    // {
    //     count ++;
    // }

    //fseek()
         
         

    FILE* fptr1 = fopen("output.txt", "a+b");    
    fwrite(buffer, 64, 64, fptr1);
    fprintf(fptr1,"\n");
    printf("%s\n", buffer);
    }



    
}


