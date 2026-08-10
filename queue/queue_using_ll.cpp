#include "queue.h"
#include "linkedlist.h"
#include <stdexcept>

class queue{
    private:
    
    list* l;

    public:
    queue(){
        try {
            l = create_list();
        } catch (const std::exception& e) {
            throw std::runtime_error("No memory for the queue");
        }
    }

    ~queue(){
        clear();
        free(l);
    }

    void push (int n)
    {
        add_node(l,n);
    }

    void pop()
    {
        if (l->size() == 0) {
            throw std::underflow_error("queue empty");
        }
        l->remove_front();
    }

    void display() const{
        if (l->size() == 0) {
            throw std::underflow_error("queue empty");
        }
        l->display();
    }

    void clear(){
        while (l->size() > 0)
        {
            pop();
        }
    }

    int peek() const{
        if (l->size() == 0) {
            throw std::underflow_error("Queue empty");
        }
        return l->get_front();
    }

};