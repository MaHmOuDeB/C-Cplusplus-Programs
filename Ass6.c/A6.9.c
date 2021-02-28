#include<stdio.h>
#include<stdlib.h>

struct list {

    int value;
    struct list * next;
};

//ADD ELEMENT IN THE BEGINING


struct list* push_front(struct list* my_list, int number){

struct list* newel;

newel = (struct list*) malloc(sizeof(struct list));
    if (newel == NULL)
    {
        printf("ERROR ALLOCATING.");
        return my_list;
    }

newel -> value = number;
newel-> next = my_list;
    
return newel;

}

//ADD ELEMENT IN THE END

struct list* push_back(struct list* my_list, int number){

struct list* cursor,* newel;
cursor = my_list;

newel = (struct list*) malloc(sizeof(struct list));
    if (newel == NULL)
    {
        printf("Dynamically allocation failed");
        return my_list;
    }

newel -> value = number;
newel -> next = NULL;

if (my_list == NULL)
{
    return newel;
}


while (cursor -> next != NULL)
{
    cursor = cursor -> next;
}

cursor -> next  = newel;

return my_list;
}

//REMOVE THE 1ST CHARACTER

struct list* byby(struct list* my_list){

struct list* cursor;
cursor = my_list;
my_list = my_list -> next;//make cursor equal to next element
cursor = cursor -> next;
free(cursor);

return my_list;
}

//PRINTING THE LIST

void print(struct list* my_list){

for (struct list* cursor = my_list; cursor; cursor = cursor -> next)
{
    printf("%d ", cursor -> value);
}

printf("\n");

}

//FREE THE LIST
 
void freel(struct list* my_list){

struct list* cursor = my_list;

while (cursor != NULL )
{
    
   cursor= my_list -> next;
   free(my_list);
   my_list = cursor;
}

}


//INSERT AN ELEMENT IN THE WANTED POSITION

struct list* INSERT(struct list* my_list, int added, int position){



    struct list* newel = NULL;
    struct list* link = NULL;
    struct list* cursor = my_list; 

    newel = (struct list*) malloc(sizeof(struct list));
        if (newel == NULL)
        {
            printf("ERROR ALLOCATING MEMORY");
            return my_list;
        }
        

    for (int i = 0; i < position - 1 ; i++)
    {
        cursor = cursor -> next;
        
    }

    link = cursor -> next;
    cursor -> next = newel;
    newel -> value = added;
    newel -> next = link ;

   /* link = cursor -> next;
    
    cursor -> value = added;
    cursor -> next = link ;*/
return my_list;
}


//REVERSE THE LINKED LIST

struct list* REVERSE(struct list* my_list){
    
    struct list* current = my_list;
    struct list* previous = NULL;
    struct list* next = NULL;


while (current != NULL)
{
    next = current -> next;
    current -> next = previous;
    previous = current;
    current = next;
}
    my_list = previous;
return my_list;
}

int main(){

    char choice = '\0';
    int number;
    int position;
    struct list* my_list = NULL;



while(choice != 'q')
{
printf("Choose a letter between the chosen letters:\n");
//getchar();
scanf("%c", &choice);
//getchar();

    if(choice == 'a' || choice == 'b' || choice == 'i' )
    {

        printf("Enter a desired number:\n");        
        scanf("%d", & number);
            if (choice == 'i')
            {
                printf("Enter the position where we want to add the number:\n");
                scanf("%d", &position);
            }
    }
    

switch (choice)
    {
case 'a':
my_list =  push_back(my_list, number );
    break;

case 'b':
my_list =  push_front(my_list, number);
break;

case 'r':
my_list = byby(my_list);
break;

case 'p':
print(my_list);
break;

case 'q':
freel(my_list);
exit(1);

case 'i':
my_list = INSERT(my_list, number, position);
break;

case 'R':
my_list = REVERSE(my_list);
    }

}
return 0;

}