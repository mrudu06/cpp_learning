#ifndef QUEUE_H //standard practice 
#define QUEUE_H


/* class and struct difference 

by default whatever is declared in class is private and vice versa in struct 
constructor - properly initialises variables*/
class Queue {
private:
    struct Node { 
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };
 
    Node* frontn;
    Node* rearn;
    int queuesize;

public:
    Queue();
    ~Queue();

    void enqueue(int val);
    void dequeue();
    int peek() const;
    void display() const;
    void clear();
};

#endif 
