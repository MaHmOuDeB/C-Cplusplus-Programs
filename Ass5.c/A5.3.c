#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int countlower(char*str);



int main(){

    char string[50];



    do
   {
        printf("Enter a new string:\n");
        getchar();
        fgets(string, sizeof(string), stdin);
        printf("%d \n\n", countlower(string));
        
       
    } while (strcmp(string,"\n") != 0);

    return 0;
}

int countlower(char*str){

    char *ptr = str;
    int count = 0;
    int lentgh = 0;

    lentgh = strlen(str);

        for (int i = 0; i < lentgh; i++)
        {
            if ((*(ptr + i) > 96) && (*(ptr + i) < 123))
            {
               count ++;
            }
            
        }
        

return count;
}