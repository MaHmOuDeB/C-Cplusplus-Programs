#include<stdio.h>
#include<stdlib.h>

int main(){

        char c;
        int count = 0;

    FILE* fptr1 =  fopen("text1.txt" , "r");
        if (fptr1 == NULL)
        {
            printf("ERROR1");
            exit(1);
        }

    FILE* fptr = fopen("merge12.txt" , "a");
        if (fptr == NULL)
        {
            printf("ERROR");
            exit(1);
        }

    while ((c = getc(fptr1)) != EOF)
    {   
        fprintf(fptr , "%c" , c);
        count ++;
    }

    FILE* fptr2 = fopen("text2.txt", "r");
        if (fptr2 == NULL)
        {
            printf("ERROR2");
            exit(1);
        }

    fseek(fptr, count, SEEK_SET);

    while((c = getc(fptr2)) != EOF)
    {
        fprintf(fptr , "%c" , c);
    }
        
return 0;
        

}