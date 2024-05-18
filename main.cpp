#include <iostream>
using namespace std;

int main()
{
    const int full_memory_size = 5;
    int arr[full_memory_size];
    int sum = 0;
    for (size_t i = 0; i < full_memory_size; i++)
    {
        cout << "Enter the number: ";
        cin >> arr[i];
    }
    for (size_t i = 0; i < full_memory_size; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
	return 0;
}