#include "linkedlist.h"

int main()
{
    int c = -1;
    int n = 0;
    

    list* l = create_list();


    while (c != 0)
    {
        printf("\nEnter your choice:\n1. Add new element to list\n2. Display list\n3. Remove element\n0. Exit\nChoice: ");
        if (scanf("%d", &c) != 1) {
            break;
        }

        switch (c)
        {
            case 1:
                printf("Enter the value to add: ");
                if (scanf("%d", &n) == 1) {
                    add_node(list* l, n);
                }
                break;

            case 2:
                display_list();
                break;

            case 3:
                printf("Enter the value to remove: ");
                if (scanf("%d", &n) == 1) {
                    remove_node(list* l,n);
                }
                break;
                
            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("please enter valid choice\n");
                break;
        }
    }
    
    return 0;
}
