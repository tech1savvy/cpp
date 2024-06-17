#include <bits/stdc++.h>
using namespace std;

void contiguousSubarrays(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ": ";
        for(int j=i;j<n;j++){
            cout << arr[j] << " ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    contiguousSubarrays(arr,5);
    
    return 0;
}