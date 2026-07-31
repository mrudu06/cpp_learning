#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

extern struct node* head;
extern struct node* tail;

struct node* creat_node(int n);
void add_node(int n);
void display_list();
void remove_node(int n);

#endif
