#include <iostream>
using namespace std;

struct student{
    char[20] name;
    int marks;
}records[20];


void Bubble_Sort(struct student arr[], int size)
{   
    int count = 0;
    for(int i = 0; i < size - 1; i++)
    {
        bool swapped = false;
        


        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j].marks > arr[j + 1].marks)
            {
                int temp = arr[j].marks;
                arr[j].marks = arr[j + 1].marks;
                arr[j + 1].marks = temp;
                swapped = true;
                count++;
            }
        }

        if(!swapped)
            break;
    }
    
    cout << "Number of times swapped = " << count << endl;
}

void print(int struct student arr[], int size)
{
    for(int i = 0; i < size; i++)
        cout << arr[i].marks << " ";

    cout << endl;
}

int main()
{

    char flag;
    int num;

    do
        record[20] = {43,64,76,87,56,45,45,76,98,98,67,65,87,65,45,45,67,97,48,92};
        cout << "\nEnter:-" << endl;
        cout << "1 | Print Student Details" << endl;
        cout << "2 | Sort Students according to Marks" << endl;
        cin >> num;

        switch(num)
        {
            case 1:
                print(record, 10);
                break;

            case 2:
                Bubble_Sort(record, 10);
                cout << "Array Sorted!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

        cout << "Do you want to continue (Y/N)? ";
        cin >> flag;

    } while(flag == 'Y' || flag == 'y');

    return 0;
}