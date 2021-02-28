#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void replaceAll(char*str, char c, char e);



int main(){

char *arr;
int n;
char c1, c2;

printf("How many characters you want in the string?\n");
scanf("%d", &n);

arr =(char*) malloc(sizeof(char) * n);

if (arr == NULL)
{
    printf("FAIL");
    exit(1);

}

do
{
    printf("Enter a string:\n");
    getchar();
    fgets( arr, sizeof(arr) ,stdin);
    
    printf("The character that you want to replace:\n");
    getchar();
    scanf("%c", &c1 );
    
    printf("The replacing character: ");
    getchar();
    scanf("%c", &c2);

    replaceAll(arr, c1, c2);
} while (strcmp( arr, "stop") != 0);






return 0;
}


void replaceAll(char*str, char c, char e){
int i = 0;

while (str[i] != '\0')
{
    if (str[i] == c )
    {
        str[i] = e;
    }

i++;
    
}

printf("The new string is %s\n\n", str);


}
