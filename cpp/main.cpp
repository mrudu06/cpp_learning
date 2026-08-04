#include "linkedlist.h"

int main() {
  List l1, l2, l3;
  l1.add_node(10);
  l1.add_node(20);
  l1.add_node(30);
  l1.display_list();

  l2.add_node(100);
  l2.add_node(200);
  l2.add_node(300);
  l2.display_list();

  l1.display_list();
}