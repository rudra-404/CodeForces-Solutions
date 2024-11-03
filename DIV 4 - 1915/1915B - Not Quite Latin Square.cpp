#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a=0, b=0, c=0;
        string str = "";
        for(int i=1; i<=3; i++)
        {
            string temp;
            cin >> temp;
            str += temp;
        }
        for(int i=0; i<9; i++)
        {
            if(str[i] == 'A') a++;
            else if(str[i] == 'B') b++;
            else if(str[i] == 'C') c++;
        }
        cout << ((a!=3)?"A\n":(b!=3)?"B\n":"C\n");
    }
    return 0;
}