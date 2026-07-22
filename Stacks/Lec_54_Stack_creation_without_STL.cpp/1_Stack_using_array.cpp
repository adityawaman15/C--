#include <iostream>
using namespace std;

class Stack {
public:
    int* arr;
    int top;
    int size;

    Stack(int s) {
        size = s;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if (top < size - 1) {
            arr[++top] = element;
        } else {
            cout << "Stack Overflow!" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack Underflow!" << endl;
        }
    }

    void peek() {
        if (top >= 0) {
            cout << "Top element is " << arr[top] << endl;
        } else {
            cout << "Stack is empty." << endl;
        }
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);

    st.peek();

    st.pop();
    st.peek();

    return 0;
}