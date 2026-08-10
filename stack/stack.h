#ifndef STACK.H
#define STACK.H

#define MAX_SIZE = 100;

struct stack{
    int top;
    int size;
    int arr[MAX_SIZE];
}

typedef struct  stack st;

void push(st* s,int n);
void pop(st* s);
void peak(st* s);