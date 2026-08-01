#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  int data;
  struct node *next;
};

class List {
private:
  node *head;
  node *tail;
  node *creat_node(int n);

public:
  List() { head = tail = NULL; }
  void add_node(int n);
  void display_list();
  void remove_node(int n);
  ~List();
};

#endif
