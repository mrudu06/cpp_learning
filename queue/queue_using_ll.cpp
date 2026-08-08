#include "queue.h"
#include "linkedlist.h"
#include <stdexcept>

class queue{
    private:
    
    list* l;
    int count;

    public:
    queue(){
        l = create_list();
        count = 0;
        if (l == nullptr)
        {
            throw
            std::runtime_error("No memory for the list");
        }

    }
    ~queue(){
        clear();
    }
    void push (int n)
    {
        add_node(l,n);
        count++;
    
    }

    void pop()
    {
        if (l->head == nullptr)
        {
            throw 
            std::underflow_error("queue empty");
        }
        struct node* temp = l->head; 
        l->head = l->head->next;
        if (l-> head == nullptr)
        {
            l->tail = nullptr;  
        }
        free(temp);
        count--;
      
    }

    void display() const{
        if (l->head == nullptr)
        {throw 
        std::underflow_error("queue empty");}
        display_list(l);
    }

    void clear(){
        while (l->head != nullptr)
        {
            pop();
        }
    }

    int peek()
    const{
        if (l->head == nullptr)
        {
            throw std::underflow_error("Queue empty");
        }
        return l->head->data;
        
    }

};