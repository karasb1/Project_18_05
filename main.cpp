#include <iostream>
using namespace std;

int main()
{
    const int size = 12;
    int arr[size];
    for (size_t i = 0; i < size; i++)
    {
        cout << "Enter the number: ";
        cin >> arr[i];
    }
    int a, b;
    cout << "Enter a range:";
    cin >> a;
    cout << "Enter a range:";
    cin >> b;
    int min = arr[a];
    int max = arr[a];
    for (size_t i = a-1; i < b; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    return 0;
}