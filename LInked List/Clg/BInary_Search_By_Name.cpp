#include <iostream>
using namespace std;
struct Phonebook
{
string name;
string pn;
}records[20];
int count=0;
void linear_search_by_name()
{
    int i;
    int flag = 0;
    string tname;
    cout<<"\n Enter Name: ";
    cin>>tname;
    for(i=0;i<count;i++){
        if(records[i].name == tname){
            cout<<"\n Name:"<<records[i].name;
            cout<<"\n Phone Number:"<<records[i].pn;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"Contact not found";
    }
}
void binary_search_by_name()
{
    int low = 0;
    int high = count - 1;
    int mid;
    int flag = 0;
    string tname;
    cout<<"\nEnter Name : ";
    cin>>tname;
    while(low <= high)
    {
        mid = low + (high - low) / 2;
        if(records[mid].name == tname)
        {
            cout<<"\nName : "<<records[mid].name;
            cout<<"\nPhone Number : "<<records[mid].pn;
            flag = 1;
            break;
        }
        else if(records[mid].name > tname)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(flag == 0)
    {
        cout<<"\nContact Not Found";
    }
}
void sort_phonebook()
{
    for(int i=0;i<count-1;i++)
    {
        for(int j=0;j<count-i-1;j++)
        {
            if(records[j].name > records[j+1].name)
            {
                Phonebook temp = records[j];
                records[j] = records[j+1];
                records[j+1] = temp;
            }
        }
    }
}
int main()
{
    int choice;
    char choice1;
    do
    {
        cout <<"\n****MENU***\n";
        cout<<"\n1.Add Contacts";
        cout<<"\n2.Display Contacts";
        cout<<"\n3.Linear search";
        cout<<"\n4.Binary search";
        cout<<"\n5.Exit";
        cout<<"\n Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                do{
                    cout<<"\n Enter Name: ";
                    cin>>records[count].name;
                    cout<<"\n Enter pn: ";
                    cin>>records[count].pn;
                    count++;
                    cout<<"Do you want to add more contacts(Y/N):";
                    cin>>choice1;
                }while(choice1!='N');
                break;
            case 2:
                cout<<"\n****Phonebook Contacts***\n";
                cout<<"Sr.No\tName\tPhone Number \n";
                int i;
                for(i=0;i<count;i++){
                    cout<<i+1<<"\t"<<records[i].name<<"\t"<<records[i].pn<<"\n";
                }
                break;
            case 3:
                 linear_search_by_name();
                break;
            case 4:
                 sort_phonebook();
                 binary_search_by_name();
                break;
            case 5:
                cout<<"Exit";
                break;
        }
    }while(choice != 5);
    return 0;
}