#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 1, m = 1;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    for(int i=1; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i] >= arr[i-1])
        {
            count++;
            m = max(count,m);
        }
        else
        {
            count = 1;
        }
    }
    cout << m;
    return 0;
}
