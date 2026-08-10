#include "linkedlist.h"
#include <string.h>

//struct node* head = NULL;
//struct node* tail = NULL;

struct node* creat_node(int n)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node)); 
    if (newNode == NULL) {
        throw std::bad_alloc();
    }
    newNode->data = n;
    newNode->next = NULL; 
    return newNode;
}

void add_node(list* l,int n)
{
    struct node* newNode = creat_node(n);
    if (l->head == NULL){
        l->head = newNode;
        l->tail = newNode;
    }
    else{
        l->tail->next = newNode;
        l->tail = newNode;
    }
}

void remove_node(list* l,int n)
{
    struct node* current = l->head;
    struct node* prev = NULL;
    while(current != NULL)
    {
        if(current->data == n)
        {
            if(prev == NULL)
            {
                l->head = current->next;
                if (l->head == NULL) {
                    l->tail = NULL;
                }
            }
            else
            {
                prev->next = current->next;
                if (current == l->tail) {
                    l->tail = prev;
                }
            }
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }
}

void display_list(list* l)
{
    struct node* current = l->head;
    printf("Elements in the current linked list are: ");
    while(current != NULL){
        printf("%d->",current->data);
        current = current->next;
    }
    printf("NULL\n");
}

struct linked_list* create_list()
{
    struct linked_list* newlist = (struct linked_list*)malloc(sizeof(struct linked_list));
    if (newlist == NULL) {
        throw std::bad_alloc();
    }
    newlist->head = NULL;
    newlist->tail = NULL;
    return newlist;
}

int linked_list::size() const
{
    int count = 0;
    struct node* current = head;
    while(current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int linked_list::get_front() const
{
    if (head == NULL) {
        throw std::underflow_error("List is empty");
    }
    return head->data;
}

void linked_list::remove_front()
{
    if (head == NULL) return;
    struct node* temp = head;
    head = head->next;
    if (head == NULL) {
        tail = NULL;
    }
    free(temp);
}

void linked_list::display() const
{
    struct node* current = head;
    printf("Elements in the current linked list are: ");
    while(current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
