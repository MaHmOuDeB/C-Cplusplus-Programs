#include<stdio.h>
#include<string.h>

int main(){

    char string[50];
    int len_str;

    fgets(string, sizeof(string), stdin);
    printf("\n\n");

    len_str = strlen(string);

    for (int i = 0; i < len_str; i++)
    {
        if (i % 2 == 0)
        {
            printf("%c\n",string[i]);
        }

        if (i % 2 == 1)
        {
            printf(" %c\n", string[i]);
        }
        
        
    }
    
return 0;

}