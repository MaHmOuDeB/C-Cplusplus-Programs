#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"

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