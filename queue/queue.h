#ifndef QUEUE_H
#define QUEUE_H

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
