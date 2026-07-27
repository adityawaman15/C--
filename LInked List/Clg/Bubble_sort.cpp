#include <iostream>
using namespace std;

struct student{
    char name[20];
    int marks;
};


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

void print(struct student arr[], int size)
{
    for(int i = 0; i < size; i++)
        cout << arr[i].marks << " ";

    cout << endl;
}

int main()
{

    char flag;
    int num;
    struct student records[20];
    
    for (int i = 90, j = 0; j <20; j++,i--){
        records[j]. marks = i;
    }


    do{
        cout << "\nEnter:-" << endl;
        cout << "1 | Print Student Details" << endl;
        cout << "2 | Sort Students according to Marks" << endl;
        cin >> num;

        switch(num)
        {
            case 1:
                print(records, 20);
                break;

            case 2:
                Bubble_Sort(records, 20);
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