#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int arr[], int n)
{
    int max_sum = INT_MIN;
    int sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = 0;
            for (int k = i; k < j; k++)
            {
                sum += arr[k];
            }
            max_sum = max(max_sum, sum);
        }
    }
}

int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    cout << maxSubArraySum(arr, n);
}