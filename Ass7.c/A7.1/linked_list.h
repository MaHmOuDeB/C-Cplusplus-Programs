#include<stdio.h>
#include<stdlib.h>

struct list* pushfront(struct list* my_list, int value);
struct list* push_back(struct list* my_list, int value);
struct list* rem(struct list* my_list);
void print(struct list* my_list);
void freel(struct list* my_list);

struct list{
        int a;
        struct list *next;/*self reference*/
    };