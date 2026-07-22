#include <iostream>
using namespace std;

class Stack{

    public: 

    int* arr;
    int top;
    int size;
    
    Stack(){
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top> 1){
            arr[top++] = element;
        }
        else{
            cout << "Stack OVERFLOWWW !! HABIBI" << endl;         
        }
    }

    void top{
        if(top>=0){
            cout << "Top element is " << arr[top] << endl;
        }
        else{
            cout << "The Stack is empty" << endl;
        }
    }

    void pop(){
        if(top>=0){
            arr[top--] = NULL;
        }
        else{
            cout << "Stack is empty HABIBI (Stack Underflow), What you on!? " << endl;
        }
    }

}