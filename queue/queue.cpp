#include "queue.h"
#include <iostream>
#include <stdexcept>

Queue::Queue() : frontn(nullptr), rearn(nullptr), queuesize(0) {} // change the enqueue to push pop rear front

Queue::~Queue() {
    clear();
} 

void Queue::enqueue(int val) {
    Node* newnode = new Node(val);
    if (rearn == nullptr) {
        frontn = rearn = newnode;
    } else {
        rearn->next = newnode;
        rearn = newnode;
    }
    queuesize++;//queue ize as count
    std::cout << "Successfully enqueued " << val << " into the queue.\n";//remove cout
}

void Queue::dequeue() {
    if (frontn == nullptr) {
        std::cout << "Queue Underflow! Cannot dequeue from an empty queue.\n";//throw an exception
        return;
    }
    Node* temp = frontn;
    int poppedVal = temp->data;
    frontn = frontn->next;
    
    if (frontn == nullptr) {
        rearn = nullptr;
    }
    
    delete temp;
    queuesize--;
    std::cout << "Successfully dequeued " << poppedVal << " from the queue.\n";
}

int Queue::peek() const {
    if (frontn == nullptr) {
        throw std::underflow_error("Queue is empty");
    }
    return frontn->data;
}

void Queue::display() const {
    if (frontn == nullptr) {
        std::cout << "Queue is empty.\n";
        return;
    }
    Node* current = frontn;
    std::cout << "Queue elements (front -> rear): ";
    while (current != nullptr) {
        std::cout << current->data;
        if (current->next != nullptr) {
            std::cout << " -> ";
        }
        current = current->next;
    }
    std::cout << "\n";
}

void Queue::clear() {
    while (frontn != nullptr) {
        Node* temp = frontn;
        frontn = frontn->next;
        delete temp;
    }
    rearn = nullptr;
    queuesize = 0;
}


//list using queue 
//use the linkedlist in this queue