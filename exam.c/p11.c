#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char str[20];
    struct node* next;
};


struct node* push(struct node* my_list, char arr[]){

struct node* newel;

newel = (struct node*) malloc(sizeof(struct node));
    if (newel == NULL)
    {
       return my_list;
    }
    
    strcpy(newel -> str,arr);
    newel -> next = my_list;
    my_list = newel;
    return my_list;

}


void print(struct node* my_list){
struct node* p= my_list;
   while(p != NULL){
       printf("%s", p-> str);
      p = p -> next;
   }
}

int main(){

int count;
struct node* my_list;
char str[20];

printf("How many elements do you want");
scanf("%d", &count);

for (int i = 0; i <= count; i++)
{
    fgets(str, 20, stdin);
    str [strlen(str) - 1] = '\0';
    my_list = push(my_list , str);
}

print(my_list);


}