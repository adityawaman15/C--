/*
Assignment:6
Assignment Title:
Implement a stack to manage undo operations in a text editor. Each action (insert/delete) is
pushed onto the stack, and undo functionality pops the last action to revert changes.

Name : Uday Surve
PRN : 125B1F133
*/

#include<iostream>
using namespace std;
const int MAX_SIZE = 50;
class STACK{
    string stack[MAX_SIZE];
    int top;
    public:
    STACK(){
        top = -1;
    }
    void push(string x){
        if(top==(MAX_SIZE-1)){
            cout<<"Stack Is Full"<<endl;
            return;
        }
        top++;
        stack[top] = x;
    }
    string Undo(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
            return " ";
        }
        string x;
        x = stack[top];
        top--;
        return x;
    }
    string peek(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
            return " ";
        }
        return stack[top];
    }
    void disp(){
        cout<<"**** Stack Contents *****"<<endl;
        for(int i = 0;i<=top;i++){
            cout<<stack[i]<<endl;
        }
        cout<<endl;
        return;
    }
    void isEmpty(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        else{
            cout<<"Non-Empty"<<endl;
        }
    }
    void isFull(){
        if(top==(MAX_SIZE-1)){
            cout<<"Stack Is Full"<<endl;
            return;
        }
        else{
            cout<<"Stack is Not Full"<<endl;
        }
    }

};
int main(){
    STACK s1;
    int ch;
    do{
    cout<<" ***** Stack In A Text Editor ****"<<endl;
    cout<<"1)Insert The Text In Stack"<<endl;
    cout<<"2)Undo The Last Operation"<<endl;
    cout<<"3)The Top Text"<<endl;
    cout<<"4)Display The Stack"<<endl;
    cout<<"5)Is Stack Empty ?"<<endl;
    cout<<"6)Is Stack Full ?"<<endl;
    cout<<"7)Exit"<<endl;
    cout<<"Enter your Choice:"<<endl;
    cin>>ch;
    switch(ch){
        case 1:
                char choice;
                do{
                    string x;
                    cout<<"Enter your Text:"<<endl;
                    cin.ignore();
                    getline(cin,x);
                    s1.push(x);
                    cout<<"Do you Want to Enter More:"<<endl;
                    cin>>choice;

                }while(choice!='N');
                break;
        case 2:
                cout<<"\nThe Undo Text : "<<s1.Undo()<<endl;
                break;
        case 3:
                cout<<"\n The Top Element is :"<<s1.peek()<<endl;
                break;
        case 4:
                s1.disp();
                break;
        case 5:
                s1.isEmpty();
                break;
        case 6:
                s1.isFull();
                break;
        case 7:
                cout<<"Thankyou"<<endl;
                break;
        default:
                cout<<"Wrong Choice"<<endl;
                break;
    }
    }while(ch!=7);
    return 0;
}
/*
OUTPUT:
 ***** Stack In A Text Editor ****
1)Insert The Text In Stack
2)Undo The Last Operation
3)The Top Text
4)Display The Stack
5)Is Stack Empty ?
6)Is Stack Full ?
7)Exit
Enter your Choice:
1
Enter your Text:
Hello
Do you Want to Enter More:
Y
Enter your Text:
How Are You ?
Do you Want to Enter More:
Y
Enter your Text:
This is     
Do you Want to Enter More:
Y
Enter your Text:
Assignment 6 
Do you Want to Enter More:
N
 ***** Stack In A Text Editor ****
1)Insert The Text In Stack
2)Undo The Last Operation
3)The Top Text
4)Display The Stack
5)Is Stack Empty ?
6)Is Stack Full ?
7)Exit
Enter your Choice:
2

The Undo Text : Assignment 6
 ***** Stack In A Text Editor ****
1)Insert The Text In Stack
2)Undo The Last Operation
3)The Top Text
4)Display The Stack
5)Is Stack Empty ?
6)Is Stack Full ?
7)Exit
Enter your Choice:
3

 The Top Element is :This is
 ***** Stack In A Text Editor ****
1)Insert The Text In Stack
2)Undo The Last Operation
3)The Top Text
4)Display The Stack
5)Is Stack Empty ?
6)Is Stack Full ?
7)Exit
Enter your Choice:
4
**** Stack Contents *****
Hello
How Are You ?
This is

 ***** Stack In A Text Editor ****
1)Insert The Text In Stack
2)Undo The Last Operation
3)The Top Text
4)Display The Stack
5)Is Stack Empty ?
6)Is Stack Full ?
7)Exit
Enter your Choice:
5
Non-Empty
 ***** Stack In A Text Editor ****
1)Insert The Text In Stack
2)Undo The Last Operation
3)The Top Text
4)Display The Stack
5)Is Stack Empty ?
6)Is Stack Full ?
7)Exit
Enter your Choice:
6
Stack is Not Full
 ***** Stack In A Text Editor ****
1)Insert The Text In Stack
2)Undo The Last Operation
3)The Top Text
4)Display The Stack
5)Is Stack Empty ?
6)Is Stack Full ?
7)Exit
Enter your Choice:
7
Thankyou*/
