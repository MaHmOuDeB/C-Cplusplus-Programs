#include<stdlib.h>
#include<stdio.h>
struct list* push_front(struct list* my_list, char c);

struct list {

    char value;
    struct list* next;
    struct list* previous;

};

// 1 -> enter a character in the begining
// 2 -> Delete nodes that have a specefic character
// 3 -> Print the current list
// 4-> print the element of the list backward
// 5 -> Empty the list and free the memory used by the list

struct list* push_front(struct list* my_list, char c){

struct list* newel = my_list;

    newel = (struct list*) malloc(sizeof(struct list));
        if (newel == NULL)
        {
            printf("ERROR DYNAMIC ALLOCATION\n");
            return my_list;
        }

    newel -> value = c;
    newel -> next = my_list;
    newel -> previous = NULL;

    return newel;
        
}

// 2 -> Delete nodes that have a specefic character

struct list* Delete(struct list* my_list, char c){

struct list* cursor = my_list;
struct list* previous = my_list;


while (cursor != NULL)
{
cursor = my_list -> next;
        if(my_list -> value == c){
            previous = my_list -> previous;
        free(my_list);
    previous -> next = my_list;
        }
    
        my_list = cursor -> previous;
}

return my_list;

}

// 3 -> Print the current list

void Print(struct list* my_list){

struct list* cursor = my_list;

for (cursor = my_list; cursor != NULL; cursor = cursor -> next)
{
    printf("%c ", cursor -> value);
}
//printf("\n");
}

// 4-> print the element of the list backward

void print_back(struct list* my_list){

struct list* cursor = my_list;

for (cursor = my_list; cursor != NULL; cursor = cursor -> previous)
{
    printf("%c ", cursor -> value );
}
printf("\n");
}


// 5 -> Empty the list and free the memory used by the list

void free_l(struct list* my_list){

struct list* cursor = my_list;

    while(cursor != NULL){
cursor = my_list -> next;
free(my_list);
my_list = cursor;
    }
}

int main(){

        int choice = 0;
        struct list* my_list = NULL;
        char c;
    

    while (choice != 5)
    {
       scanf("%d", &choice);
            if (choice == 1 || choice == 2)
            {
                scanf("%c", &c);
                //getchar();
            }

    switch (choice)
    {
    case 1:
    my_list = push_front(my_list, c);
        break;
    
    case 2: 
    my_list = Delete(my_list, c);
        break;

    case 3:
    Print(my_list);
        break;
    case 4:
    print_back(my_list);
        break;
    case 5: 
    free_l(my_list);
        break;
    
    }
            
    }
    
return 0;

}


