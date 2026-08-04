#include "queue.h"
#include <iostream>
#include <stdexcept>

int main() {
    Queue q;
    int choice = -1;
    int value = 0;

    while (choice != 0) {
        std::cout << "1. Enqueue\n";
        std::cout << "2. Dequeue\n";
        std::cout << "3. Peek\n";
        std::cout << "4. Display Queue\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        
        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input.\n";
            continue;
        }

        switch (choice) {
            case 1:
                std::cout << "Enter the value to enqueue: ";
                if (std::cin >> value) {
                    q.enqueue(value);
                } else {
                    std::cin.clear();
                    std::cin.ignore(10000, '\n');
                    std::cout << "Invalid value.\n";
                }
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                std::cout << "Front element: " << q.peek() << "\n";
                break;

            case 4:
                q.display();
                break;

            case 0:
                std::cout << "Exit\n";
                break;

            default:
                std::cout << "Please enter a valid choice.\n";
                break;
        }
    }

    return 0;
}
