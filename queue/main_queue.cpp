#include <iostream>
#include <stdexcept>
#include "queue_using_ll.cpp" 


int main() {
    queue q;

    try {
        std::cout << "Pushing elements 10, 20, 30...\n";
        q.push(10);
        q.push(20);
        q.push(30);

        std::cout << "\nCurrent Queue: ";
        q.display();

        std::cout << "Front element: " << q.peek() << "\n\n";

        std::cout << "Popping one element...\n";
        q.pop();

        std::cout << "\nQueue after pop: ";
        q.display();

        std::cout << "Front element: " << q.peek() << "\n\n";

        std::cout << "Clearing the queue...\n";
        q.clear();

        std::cout << "\nQueue after clear: ";
        q.display();

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    return 0;
}
