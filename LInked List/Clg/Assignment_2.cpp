#include <iostream>
using namespace std;

void Bubble_Sort(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        bool swapped = false;

        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if(!swapped)
            break;
    }
}

void print(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[10] = {34,654,234,235,65,34,23,65,76,10};

    char flag;
    int num;

    do
    {
        cout << "\nEnter:-" << endl;
        cout << "1 | Print Array" << endl;
        cout << "2 | Sort Array" << endl;
        cin >> num;

        switch(num)
        {
            case 1:
                print(arr, 10);
                break;

            case 2:
                Bubble_Sort(arr, 10);
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