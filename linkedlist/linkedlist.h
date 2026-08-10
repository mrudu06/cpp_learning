#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdexcept>
#include <new>

struct node{
    int data;
    struct node* next;
};

struct linked_list{
    struct node* head;
    struct node* tail;

    int size() const;
    int get_front() const;
    void remove_front();
    void display() const;
};

typedef struct linked_list list;


struct linked_list* create_list();
void add_node(list* l,int n);
void display_list(list* l);
void remove_node(list* l,int n);

#endif

//compose system 