/*
Stack container follows LIFO (Last In First Out) order of insertion and deletion. It 
means that most recently inserted element is removed first and the first insert
ed element will be removed last. This is done by inserting and deleting elements at on
ly one end of the stack which is generally called the top of the stack.

In stack, new elements can only be inserted at the top of the stack by using push() method.

Only the top element of the stack can be accessed using top() method.   

In stack, only the top element of the stack can be deleted by using pop() method in one operation.

In stack, only the top element of the stack can be deleted by using pop() method in one operation.
*/

#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(5);
    st.push(7);
    st.push(8);

    cout << "TOP ELEMENT: " << st.top() << endl;


    st.pop();
    cout << "Top element after pop:" << st.top() << endl;
    
    cout << "Emptying elements | ";
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;


}