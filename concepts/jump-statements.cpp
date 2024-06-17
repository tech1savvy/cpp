#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "--continue--" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "i: " << i << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "  j: " << j << endl;
            continue;
        }
    }
    cout << "--break--" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "i: " << i << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "  j: " << j << endl;
            break;
        }
    }
    return 0;
}