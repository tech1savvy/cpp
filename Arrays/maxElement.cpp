#include <iostream>
using namespace std;

int maxElement(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;

    cout << "max ele:" << maxElement(arr, n) << endl;
}