#include <iostream>
using namespace std;

class deque{
    private:
     int size;
     int front;
     int rear;
     int* arr ;
    
     public:

     deque(){
        size = 1000;
        arr = new int[size];
        front = -1;
        rear = -1;
     }

     bool isFull(){
        if((rear == size -1 && front == 0) || (front != 0 && rear == (front - 1)%(size-1))){
            return true;
        }
        else{
            return false;
        }
     }

     bool isEmpty(){
        if(front == -1){
            return true;
        }
        else{
            return false;
        }
     }
    
     void pushFront(int d){
        if(isFull()){
            cout << "queue is full" << endl;
            return;
        }
        else if(front == -1){
            front = rear = 0; 
        }
        else if(front == 0){
            front = size -1;
        }
        else{
            front--;
        }

        arr[front] = d;
     };
     void pushRear(int d){
        if(isFull()){
            cout << "queue is full" << endl;
            return;
        }
        else if(rear == -1){
            front = rear = 0; 
        }
        else if(rear == size-1){
            rear = 0;
        }
        else{
            rear++;
        }

        arr[rear] = d;

     }
    
     int popRear(){
        if(isEmpty()){
            cout <<" It is Empty, cannot pop!" << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){
            front = rear = -1;
        }
        else if(front == size -1){
            front = 0;
        }
        else{front++;}

        return ans;
     };
     int getFront(){
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[front];
        }
     };
     int getRear(){
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[rear];
        }
     };
     
     
};
int main(){

}