#include<stdio.h>


char str[sizeof(unsigned char) * 8 + 1];
char sstr[sizeof(unsigned char) * 8 + 1];
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

void set(char c,int x, int y, int z){

c = c | (1 << x);
c = c | (1 << y);
c = c | (1 << z);

printf("After setting the bits: %s \n", ctobin(c, str) );



}

int main(){

    unsigned char c;
    int x, y, z;
printf("Enter a character:\n");
scanf("%c", &c);
printf("Which bits do you want to set?\n");
scanf("%d %d %d", &x, &y, &z);
printf("The decimal representation is: %d\n", c );
printf("The binary representation is: %s\n", ctobin(c,str));
set(c, x, y, z);
printf("\n");


return 0;
}

