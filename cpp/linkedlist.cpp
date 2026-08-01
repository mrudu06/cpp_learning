#include "linkedlist.h"
#include <string.h>

node *List::creat_node(int n) {
  struct node *newNode = new node();
  if (newNode == NULL) {
    printf("Memory allocation failed\n");
    exit(1);
  }
  newNode->data = n;
  newNode->next = NULL;
  return newNode;
}

void List::add_node(int n) {
  node *newNode = creat_node(n);
  if (head == NULL) {
    head = newNode;
    tail = newNode;
  } else {
    tail->next = newNode;
    tail = newNode;
  }
}

void List::remove_node(int n) {
  struct node *current = head;
  struct node *prev = NULL;
  while (current != NULL) {
    if (current->data == n) {
      if (prev == NULL) {
        head = current->next;
        if (head == NULL) {
          tail = NULL;
        }
      } else {
        prev->next = current->next;
        if (current == tail) {
          tail = prev;
        }
      }
      delete current;
      return;
    }
    prev = current;
    current = current->next;
  }
}

void List::display_list() {
  struct node *current = head;
  printf("Elements in the current linked list are: ");
  while (current != NULL) {
    printf("%d->", current->data);
    current = current->next;
  }
  printf("NULL\n");
}

List::~List() {
  struct node *tmp = head;
  while (tmp != NULL) {
    struct node *tmpn = tmp->next;
    delete tmp;
    tmp = tmpn;
  }
}
