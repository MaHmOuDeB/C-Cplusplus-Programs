#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int countinsensitive(char*str, char c, int n);

int main(){

char *str;
char *str1;
int n;
int len;
char c;

scanf("%d", &n);
str = (char*) malloc (sizeof(char) * n);
    if (str == NULL)
    {
        exit(1);
    }
    
printf("Enter a string: ");

getchar();
fgets(str, sizeof(str), stdin);

len = strlen(str);
printf("Lentgh of the string is %d\n", len );

n = len;

str1 = (char*) malloc (sizeof(char) * n);

getchar();
strcpy(str1, str);
int lentgh1 = sizeof(str1);
printf("The copy of the first string in the second one: \n %s \n", str);
printf("The size of the second string is %d\n\n", lentgh1 - 1 );

free(str);

printf("Which character do you wanna search? ");
scanf("%c", &c);
getchar();


printf("The number of times that the character %c was repeated in the string is %d\n", c, countinsensitive(str, c, n));


   
return 0;
    
}







int countinsensitive(char*str1, char c, int n){

    int count = 0;



    for (int i = 0; i < n; i++)
    {
         if ( str1[i] == tolower(c) || str1[i] == toupper(c))
        {
            count++;
        }
    }
    

      
        
        return count;
        
    }

   
    



