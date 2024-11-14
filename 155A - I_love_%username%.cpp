#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, max, min, amaizing = 0;
    cin >> test;
    int arr[test];
    cin >> arr[0];
    max = min = arr[0];
    for(int i=1; i<test; i++)
    {
        cin >> arr[i];
        if(arr[i] > max)
        {
            max = arr[i];
            amaizing++;
        }
        if(arr[i] < min)
        {
            min = arr[i];
            amaizing++;
        }
    }
    cout << amaizing;
    return 0;
}