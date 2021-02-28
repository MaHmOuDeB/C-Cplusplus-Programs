#include<stdio.h>

char str[sizeof(unsigned char) * 6 + 1];
int maxbit = sizeof(unsigned char ) * 6 - 1;
char* ctobin(unsigned char c, char * str ){

    for (int i = 0; i <= maxbit; i++)
    {
        if (c & 1 << i)
        {
            str[i] = '1';
        }

        else
        {
            str[i] = '0';
        }
        
        
    }

    str[maxbit + 1] = '\0';

    return str;
    
}

int main(){

    unsigned char c;
    printf("Enter a character:\n");
    scanf("%c", &c);
    printf("The decimal representation of the character: %d \n",c);
    printf("The backward representation of the character: %s\n", ctobin(c, str));
    
    
    return 0;
}