#include <iostream>
using namespace std;

class Node {
public:
    string name;
    int priority;
    Node* next;
};

class PriorityQueue {
private:
    Node* front;

public:

    PriorityQueue() {
        front = nullptr;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void push(int priority, string name) {
        Node* newNode = new Node();
        newNode->priority = priority;
        newNode->name = name;

        if (isEmpty() || priority > front->priority) {
            newNode->next = front;
            front = newNode;
        }
        else {
            Node* current = front;
            while (current->next != nullptr && current->next->priority >= priority) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    int pop_front() {
        if (isEmpty()) {
            cout << "Priority queue is empty\n";
            return 0;
        }
        else {
            cout << front->priority << "," << front->name << endl;
            front = front->next;
            return 0;
        }
    }

};