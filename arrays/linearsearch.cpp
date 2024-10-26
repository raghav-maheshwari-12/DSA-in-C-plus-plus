#include <iostream>
using namespace std;
bool isFound(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key = arr[i])
        {
            return 1;
        }
        return 0;
    }
}
int main()
{
    int arr[100];
    int size;
    cout << "enter the size of array" << endl;
    cin >> size;
    cout << "enter teh value of arrays" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout<<"enter the value of key"<<endl;
    cin >> key;
    if (isFound(arr, size, key))
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "not present" << endl;
    }
    return 0;
}