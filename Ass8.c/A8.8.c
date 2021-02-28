#include<stdio.h>
#include<stdlib.h>

int main(){

        char c;
        char _c;
        int words1 = 0;
        int words2 = 0;

    FILE* fptr = fopen("words.txt", "r");
    FILE* _fptr = fopen("words.txt", "r");


    while ((c = getc(fptr)) != EOF)
    {
        if ((c == ' ') || (c == '\t') || (c == '\r') || (c == '\n') )
        {
        //if ((_c != ' ') ||(_c != ',') || (_c != '?') || (_c != '!') || (_c  != '.') || (_c != '\t') || (_c != '\r') || (_c != '\n') ){

            putchar(c);
            words1 ++;


        //}

        }

        //_c = getc(_fptr);
        
    }

    FILE* fptr1 = fopen("words2.txt", "r");

    while((c= getc(fptr1)) != EOF){

        if ((c == ' ') || (c == '?') || (c = '!') || (c = '.') || (c = '\t') || (c = '\r') || (c = '\n') )
        {
            words2 ++;
        }

    }

printf("The file words.txt contains %d words\n", words1);
printf("The file words2.txt contains %d words\n", words2);

return 0;
}