#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n, sum = 0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>str;
        if(str=="Tetrahedron") sum+=4;
        else if(str=="Cube") sum+=6;
        else if(str=="Octahedron") sum+=8;
        else if(str=="Dodecahedron") sum+=12;
        else if(str=="Icosahedron") sum+=20;
    }
    cout<<sum<<endl;
    return 0;
}