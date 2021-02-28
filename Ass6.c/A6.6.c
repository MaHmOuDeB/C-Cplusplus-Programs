#include<stdio.h>


char str[sizeof(unsigned char) * 8 + 1];
int maxbit = sizeof(unsigned char) * 8 - 1;

char* ctobin(char c, char* str){

    for (int i = 0; i <= maxbit; i++)
    {
        if (c & (1 << i))
        {
        str[maxbit - i] = '1';
        }

        else
        {
            str[maxbit - i] = '0';
        }
        
        
    }
            str[maxbit + 1] = '\0';

    return str;
}


int main(){

    unsigned char c;
printf("Enter a character:\n");
scanf("%c", &c);
printf("The decimal representation is: %d\n", c );
printf("The binary representation is: %s\n", ctobin(c,str));

return 0;
}

