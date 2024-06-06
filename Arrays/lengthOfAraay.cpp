#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "length: " << n;
}