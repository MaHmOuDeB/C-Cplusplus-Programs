#include<stdio.h>
int count_cons_byref(char *str);

int main(){

char str[100];


do
{
fgets(str, sizeof(str), stdin);
printf("\n\n");

printf("The number of consonants in the string: %d\n", count_cons_byref(str) );

    
} while (str[0] != '\n');


    return 0;
}


int count_cons_byref(char *str){

int num_c = 0;

    for (int i = 0; *(str +i) != '\0'; i++)
    {
        if (*(str + i) == 'a' || *(str + i) == 'e'
            || *(str + i) == 'i' || *(str + i) == 'o'
            || *(str + i) == 'u' || *(str + i) == 'A'
            || *(str + i) == 'E' || *(str + i)== 'I'
            || *(str + i) == 'O' || *(str + i)== 'U'
            || *(str + i) == ' '                  
           ) 
        {
            continue;
        }

        else
        {
            num_c ++;
        }
        
  
    }
return num_c - 1;
}