#include<stdio.h>
#include<stdlib.h>

int main(){

    char ch[10];
    int i = 1;
    FILE * fptr = fopen("generatentxt", "w");
        if (fptr == NULL)
        {
            exit(1);
        }

    while (i <= 100)
    {
        sprintf(ch, "%d   %d\n", i, i*i);
        fwrite(ch, 1,10 , fptr);
    }
    
    fclose(fptr);
        
}