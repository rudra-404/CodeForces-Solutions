#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, ab, bc, ac;
    cin >> a >> b >> c;
    ab = abs(a-b);
    bc = abs(b-c);
    ac = abs(a-c);
    cout<<(ab+bc+ac)/2;
    return 0;
}