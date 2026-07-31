#include "linkedlist.h"

struct node* head = NULL;
struct node* tail = NULL;

struct node* creat_node(int n)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node)); 
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = n;
    newNode->next = NULL; 
    return newNode;
}

void add_node(int n)
{
    struct node* newNode = creat_node(n);
    if (head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}

void remove_node(int n)
{
    struct node* current = head;
    struct node* prev = NULL;
    while(current != NULL)
    {
        if(current->data == n)
        {
            if(prev == NULL)
            {
                head = current->next;
                if (head == NULL) {
                    tail = NULL;
                }
            }
            else
            {
                prev->next = current->next;
                if (current == tail) {
                    tail = prev;
                }
            }
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }
}

void display_list()
{
    struct node* current = head;
    printf("Elements in the current linked list are: ");
    while(current != NULL){
        printf("%d->",current->data);
        current = current->next;
    }
    printf("NULL\n");
}
