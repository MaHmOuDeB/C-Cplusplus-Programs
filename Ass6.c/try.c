#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

struct list {
    int info;
    struct list *next;
}; //function to insert a value in the beginning of the list
struct list* push_front(struct list *my_list, int value) {
    struct list *newel;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL) {
        printf("Error allocating memory\n");
        return my_list;
}
    newel ->info = value;
    newel ->next = my_list;
    return newel;
}
//function to insert a value at the end of the list
struct list* push_back(struct list* my_list, int value) {
    struct list *cursor, *newel;
    cursor = my_list;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL) {
        printf("Error allocating memory\n");
        return my_list;
}
    newel ->info = value;
    newel ->next = NULL;
    if (my_list == NULL)
        return newel;
    while (cursor ->next != NULL)
        cursor = cursor ->next;
    cursor ->next = newel;
    return my_list;
}
//function to print the linked list
void print_list(struct list* my_list) {
    struct list *p;
    for(p = my_list; p; p = p->next) {
        printf("%d ", p->info);
}
    printf("\n");
}

struct list *delete_first(struct list *my_list) {
    if(my_list != NULL) {
        struct list *ptr = my_list->next;
        free(my_list);
        my_list = ptr;
    }
    return my_list;
}

void dispose_list(struct list* my_list) {
    struct list *nextelem;
    while (my_list != NULL) {
        nextelem = my_list ->next;
        free(my_list);
        my_list = nextelem;
 
}
}
int main() {
    struct list* my_list = NULL;
    char x=0;
    int y;
    while(x != 'q') {//if q is not entered 
        scanf("%c", &x);
        if((x == 'a')| (x =='b')) {
            scanf("%d", &y);
        }
        
        switch (x) { //switch statement for every desired character
        
        case 'a' :
            my_list = push_back(my_list, y);//call of the push_back function
            break;
        case 'b' :
            my_list = push_front(my_list, y);//call of the push_front function
            break;
        case 'p':
            print_list(my_list);//call of the function to print
            break;
        case 'q':
            dispose_list(my_list);//call of the function to free the memory
            exit(1);
        case 'r':
            my_list =delete_first(my_list);//call of the function to delete the first element
            break;
        }
    }
    return 0;
}