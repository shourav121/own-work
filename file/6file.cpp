#include <iostream>

#define MAX_SIZE 5

class CircularQueue {
private:
    int arr[MAX_SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return ((rear + 1) % MAX_SIZE == front);
    }

    void enqueue(int val) {
        if (isFull()) {
            std::cout << "Queue is full. Cannot enqueue." << std::endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % MAX_SIZE;
        arr[rear] = val;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot peek." << std::endl;
            return -1;
        }
        return arr[front];
    }
};

int main() {
    CircularQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    std::cout << "Queue front element: " << q.peek() << std::endl;

    q.dequeue();
    q.dequeue();

    std::cout << "Queue front element after dequeue: " << q.peek() << std::endl;

    return 0;
}
