#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len, a=0;
    string str;
    cin>>str;
    len=str.length();
    for(int i=0; i<len; i++)
    {
        if(str[i]=='a')
        {
            a++;
        }
    }
    cout<<min(len,2*a-1)<<endl;
    return 0;
}