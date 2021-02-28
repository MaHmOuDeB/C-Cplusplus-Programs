#include"linked_list.h"

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

