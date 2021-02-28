#include<stdio.h>

int substitute_vowels(char *s, char ch){
int count = 0;
int i = 0;
printf("byby f\n");

    
    while (s[i] != '\0')
    {
printf("byby f1\n");

        if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') ||
            (s[i] == 'o') || (s[i] == 'u'))
        {
            s[i] = ch;
            count++;
        }
            i++;
        
    }
    
// printf("%s\n", s);
// printf("count = %d\n", count);

return count;
    

}



int main(){

    int n = 0;
char s[] = "This is a sentence";
printf("%s\n", s);
n = substitute_vowels(s, 'o');
printf("%s\n", s);
printf("%d\n", n);

}
