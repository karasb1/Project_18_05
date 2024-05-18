#include <iostream>
using namespace std;

int main()
{
    const int full_memory_size = 6;
    int arr[full_memory_size];
    for (size_t i = 0; i < full_memory_size; i++)
    {
        cout << "Enter the number: ";
        cin >> arr[i];
    }
    for (size_t i = 1; i < full_memory_size+1; i++)
    {
        cout << arr[full_memory_size-i] << " ";
    }
    return 0;
}