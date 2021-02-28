#include<stdio.h>
#include<string.h>

int main(){

char string1[50];
char string2[50];
int len1, len2;

fgets(string1, sizeof(string1), stdin);
fgets(string2, sizeof(string2), stdin);


//Lenght of the two strings:
len1 = strlen(string1);
len2 = strlen(string2);
printf("The lenght of the two strings: %d and %d\n\n", len1 - 1, len2 - 1);

//Concatenation of the two strings
strcat(string1, string2);
printf("The concatenated string is %s\n\n", string1);

char string3[50];
//Copy a string in an other one
strcpy(string3, string2);
printf("The copy of the string 2 within string 3: %s\n\n", string3);

int comparaison;
//Compare two strings
comparaison = strcmp(string1, string2);
if (comparaison > 0)
{
    printf("One is bigger than two\n\n");
}
else if (comparaison < 0)
{
    printf("One is smaller than two\n\n");
}

else
{
    printf("The two strings are equal\n\n");
}

//String search
char c;
char* p;
int position;
scanf("%c", &c);
p = strchr(string2, c);

position = strlen(string2) - strlen(p) ;
printf("String starting from %c is %s\n", c, p);
printf("Position of the first occurence of %c is %d\n",c, position);








return 0;

}