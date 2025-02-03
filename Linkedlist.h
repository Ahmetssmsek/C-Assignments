#include <iostream>
template <typename T>
struct Node {
    T data;
    Node<T>* next;
};


class LlStack {
private:
    Node<char>* top;

public:
    LlStack() {
        this->top = nullptr;
    }

    void push(char data) {
        Node<char>* node = new Node<char>;
        node->data = data;
        node->next = this->top;
        this->top = node;
    }

    void pop() {
        if (this->top == nullptr) {
            std::cout << "Stack is empty\n";
            return;
        }
        Node<char>* temp = this->top;
        this->top = this->top->next;
        delete temp;
    }

    char getTop() {
        if (isEmpty()) {
            std::cout << "Stack is already empty !" << std::endl;
            return 0;
        }
        return(top->data);
    }


    bool isEmpty() {
        return (this->top == nullptr);
    }

};
