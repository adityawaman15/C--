#include<iostream>
using namespace std;
struct STUDENT{
    string name;
    int marks;

}records[100];
int count = 0;
void Input();
void Bubble_Sort();
void Insertion_Sort();
void Selection_Sort();

int main(){
    int ch;
    do{
        cout<<"****** Sorting Algorithm ******"<<endl;
        cout<<"1)Inputing The Data"<<endl;
        cout<<"2)Bubble Sort"<<endl;
        cout<<"3)Selection Sort"<<endl;
        cout<<"4)Insertion Sort"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>ch;

        switch(ch){
            case 1:
                    Input ();
                    break;
            case 2:
                    Bubble_Sort();
                    break;
            case 3:
                    Selection_Sort();
                    break;
            case 4: 
                    Insertion_Sort();
                    break;
            default:
                    break;
        }
        
    }while(ch != 4);
    return 0;
}
void Input (){
    char z;
    do{
                       
                        cout<<"Enter the name:"<<endl;
                        cin>>records[count].name;
                        cout<<"Enter the CGPA:"<<endl;
                        cin>>records[count].marks;
                        count++;
                        
                        cout<<"Do you want to enter the name:(Y/N)"<<endl;
                        cin>>z;
                    }while(z!='N');
    return;
}
void Bubble_Sort(){
    for(int i = 0;i<count-1;i++){
        bool SWAP = false;
        for(int j = 0;j<count-i-1;j++){
            if(records[j].name > records[j+1].name){
                swap(records[j].name,records[j+1].name);
                SWAP = true;
            }
        }
        if(!SWAP){
            cout<<"Array is Sorted"<<endl;
            break;
        }

    }
    cout<<"**** Sorted Students List *****"<<endl;
    cout<<"SrNo\tName\tCGPA\t\n";
    for(int i=0;i<count;i++){
        
        cout<<i+1<<"\t"<<records[i].name<<"\t"<<records[i].marks<<"\t\n";
    }
}
void Selection_Sort(){
    for(int i = 0;i<count;i++){
        int min = i;
        for(int j = 1;j<count;j++){
            if(records[min].name > records[j].name){
                min = j;
            }
        }
        swap(records[min].name,records[i].name);
    }

    cout<<"**** Sorted Students List *****"<<endl;
    cout<<"SrNo\tName\tCGPA\t\n";
    for(int i=0;i<count;i++){
        
        cout<<i+1<<"\t"<<records[i].name<<"\t"<<records[i].marks<<"\t\n";
    }
}
void Insertion_Sort(){
    for(int i = 1;i<count;i++){
        string temp = records[i].name;
        int j = i-1;
        for(;j>=0;j--){
            if(records[j].name > temp){
                records[j+1].name = records[j].name;
            }
            else{
                break;
            }
        }
        records[j+1].name = temp;
    }
    cout<<"**** Sorted Students List *****"<<endl;
    cout<<"SrNo\tName\tCGPA\t\n";
    for(int i=0;i<count;i++){
        
        cout<<i+1<<"\t"<<records[i].name<<"\t"<<records[i].marks<<"\t\n";
    }
}



