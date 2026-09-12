#include <iostream>
using namespace std;

class queue {
private:
    int *arr;
    int size;
    int front;
    int rear;

public:
    queue() {
        size = 10;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int d) {

        // Queue full
        if ((rear == size - 1 && front == 0) ||
            (rear == front - 1)) {

            cout << "Queue is full, cannot enqueue!" << endl;
            return;
        }

        // First element
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        else {
            rear = (rear + 1) % size;
        }

        arr[rear] = d;
    }

    void dequeue() {

        // Queue empty
        if (front == -1) {
            cout << "Queue is empty, cannot dequeue!" << endl;
            return;
        }

        cout << "Deleted: " << arr[front] << endl;

        // Only one element was present
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % size;
        }
    }
};