#include <iostream>

// Node class for both stack and queue
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Stack implemented using linked list
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        if (top == nullptr) {
            top = newNode;
        } else {
            newNode->next = top;
            top = newNode;
        }
    }

    void pop() {
        if (top == nullptr) {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (top == nullptr) {
            std::cout << "Stack is empty. Cannot peek." << std::endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return (top == nullptr);
    }
};

// Queue implemented using linked list
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue() {
        if (front == nullptr) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
    }

    int peek() {
        if (front == nullptr) {
            std::cout << "Queue is empty. Cannot peek." << std::endl;
            return -1;
        }
        return front->data;
    }

    bool isEmpty() {
        return (front == nullptr);
    }
};

int main() {
    // Stack operations
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element of stack: " << stack.peek() << std::endl;

    stack.pop();
    stack.pop();

    std::cout << "Top element of stack after popping: " << stack.peek() << std::endl;

    // Queue operations
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    std::cout << "Front element of queue: " << queue.peek() << std::endl;

    queue.dequeue();
    queue.dequeue();

    std::cout << "Front element of queue after dequeuing: " << queue.peek() << std::endl;

    return 0;
}
