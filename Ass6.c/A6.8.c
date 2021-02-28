#include<stdio.h>
#include<stdlib.h>

struct list* pushfront(struct list* my_list, int value);
struct list* push_back(struct list* my_list, int value);
struct list* rem(struct list* my_list);
void print(struct list* my_list);

struct list{
        int a;
        struct list *next;/*self reference*/
    };


// ADD A NEW ELEMENT IN THE END OF THE LIST

struct list* pushfront(struct list* my_list, int value){

struct list* newel;

newel = (struct list*) malloc(sizeof(struct list));

    if (newel == NULL)
    {
       printf("ERROR ALLOCATING MEMORY\n");
       return my_list;
    }

newel -> a = value;
newel -> next = my_list;

return newel;
}


//ADD A NEW ELEMENT IN THE END OF THE LIST

struct list* push_back(struct list* my_list, int value){

struct list* newel, * cursor = my_list;

newel = (struct list *) malloc (sizeof(struct list));

    if (newel == NULL)
{
    printf("ERROR ALLOCATION MEMORY 1\n");
    return my_list;
}

newel -> a = value;
newel -> next = NULL;

if (my_list == NULL)
{
   return newel;
}

while (cursor -> next != NULL)
{
    cursor = cursor -> next;
}

cursor -> next = newel;

return my_list;
} 

//removing the first element from the list

struct list* rem(struct list* my_list){

struct list * cursor = my_list;

my_list = my_list -> next;
free(cursor);

return my_list;

}

void print(struct list* my_list){

struct list* cursor = my_list;

    for (cursor = my_list; cursor; cursor =  cursor -> next)
    {
        printf("%d ",cursor -> a );
    }
    
printf("\n");

}

void freel(struct list* my_list){

    struct list* cursor = my_list;
    while (my_list != NULL)
    {
        cursor = my_list -> next; // point to the next element of my_list
        free(my_list);
        my_list = cursor;
    }
    
}

int main(){

    char choice = '\0';
    int number;
    struct list* my_list = NULL;


while(choice != 'q')
{
//printf("Choose a letter between the chosen letters:\n");
//getchar();
scanf("%c", &choice);
//getchar();

    if(choice == 'a' || choice == 'b')
    {
        printf("Enter a desired number:\n");        
        scanf("%d", & number);
    }
    

switch (choice)
    {
case 'a':
my_list =  push_back(my_list, number );
    break;

case 'b':
my_list =  pushfront(my_list, number);
break;

case 'r':
my_list = rem(my_list);
break;

case 'p':
print(my_list);
break;

case 'q':
freel(my_list);
exit(1);

    }

}
return 0;
}

