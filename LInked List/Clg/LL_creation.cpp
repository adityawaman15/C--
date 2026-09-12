#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    int ch;
    Node* head = NULL;


    do{
        cout << "\n *****SLL Menu*****\n";
        cout << "1) Add Node at First\n";
        cout << "2) Add Node at Last\n";
        cout << "3) Add Node in Between\n";
        cout << "4) Display\n";
        cout << "5) Delete\n";
        cout << "6) Search\n"
        cout << "7) Exit\n\n";
        cout << "Enter your choice | ";
        cin >> ch;

        switch (ch)
        {
            case 1:
              break;
            case 2:
              break;
            case 3:
              break;
            case 4:
              break;
            default:
                exit(0);
            
        }
    }while(ch!= 7);
}