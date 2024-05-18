#include <iostream>
#include <ctime>
using namespace std;


int main() {
    srand(time(0));
    const int full_memory_size = 1000;
    int arr[full_memory_size];
    int size;
    do
    {
        cout << "Enter the size of the array(0 - 100): ";
        cin >> size;
    } while (size > 100 || size < 0);

    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 201 - 100;
    }
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int min = arr[0];
    int max = arr[0];
    int k = 0, k1 = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            k = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            k1 = i;
        }
    }
    int sum_m = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] < 0) {
            sum_m += arr[i];
        }
    }
    cout << sum_m << endl;
    int d = 1;
    for (size_t i = k1; i < k+1; i++)
    {
        if (arr[i] < 0) {
            d *= arr[i];
        }
    }
    if (d == 1) {
        for (size_t i = k; i < k1 + 1; i++)
        {
            if (arr[i] < 0) {
                d *= arr[i];
            }
        }
    }
    else {
        cout << d << endl;
    }
    int d1 = 1;
    for (size_t i = 0; i < size; i++)
    {
        if (i % 2 == 0) {
            d1 *= arr[i];
        }
    }
    cout << d1 << endl;
    int m1 = 0, m2 = 0;
    int summ = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] < 0) {
            m2 = i;
        }
        if (arr[size - i] < 0) {
            m1 = i;
        }
    }
    for (size_t i = m1; i < m2; i++)
    {
        summ += arr[i];
    }
    cout << summ << endl;
    return 0;
}
