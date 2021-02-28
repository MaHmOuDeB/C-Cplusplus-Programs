#include <stdio.h>
#include <stdlib.h>

struct list * add_node(struct list * head, char val);
struct list * remove_ele(struct list * head);
void print_list(struct list * head);


// Doubly Linked List

// switch
// '1' add the character to the beginning of the list
// '2' remove all elements with the given character -> “The element is not in the list!”
// '3' print current list
// '4' print the elements backward
// '5' empty the list, free the memory

struct list
{ // declare our data type
    char data;
    struct list * next;
    struct list * prev;
};




int main()
{
    int choice = 0;
    char val;

    struct list * head = NULL ;
    while(choice != 5)
    {
        printf("Enter Choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:// '1' add the character to the beginning of the list
            
            printf("Enter Value:\n");
            scanf("%c", &val);
            getchar();
            head = add_node(head, val);
            break;
        case 2:// '2' remove all elements with the given character -> “The element is not in the list!”
            head = remove_ele(head);
            break;
        case 3:// '3' print current list
            print_list(head);
            break;
        case 4:// '4' print the elements backward
            /* code */
            break;
        case 5:// '5' empty the list, free the memory
            /* code */
            break;
        }
    }


    return 0;
}

struct list * add_node(struct list * head, char val)
{
    
    struct list * newnode = head;
    newnode = (struct list *)malloc(sizeof(struct list));

    //create the node
    newnode -> prev = NULL;
    newnode -> next = head;

    // printf("Enter value:\n");
    // scanf("%c", &newnode -> data);
    // getchar();
    

    head -> prev = newnode;

    return newnode;
}
struct list * remove_ele(struct list * head)
{
    //head = 0;
    char c;
    struct list * cursor;
    cursor = head;

    printf("Enter unwanted data:\n");
    
    scanf("%c", &c);
    while(cursor -> next != NULL)
    {
        cursor = cursor -> next;
        if((cursor -> data) == c)
        {
            // update links
            cursor -> prev -> next = cursor -> next;
            cursor -> next -> prev = cursor -> prev;
            free(cursor);
        }
        else
        {
            printf("The element is not in the list!\n");
        }
    }
    return head;
}

void print_list(struct list * head)
{
    //head = 0;
    struct list * cursor = head;
    while(cursor != NULL)
    {
        printf("%c ", cursor ->data);
        cursor = cursor -> next;
    }
}

