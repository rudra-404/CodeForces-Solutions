#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, num, police = 0, crime_untreated = 0;
    cin >> test;
    for(int i=0; i<test; i++)
    {
        cin >> num;
        if(num<0)
        {
            if(police>0) police--;
            else crime_untreated++;
        }
        else police+=num;
    }
    cout << crime_untreated;
    return 0;
}