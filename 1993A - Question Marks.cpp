#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int test, A, B, C, D, n;
    string answer;
    cin >> test;
    while(test--)
    {
        cin >> n >> answer;
        A = B = C = D = 0;
        for(int i=0; i<answer.size(); i++)
        {
            if(answer[i]=='A') A++;
            else if(answer[i]=='B') B++;
            else if(answer[i]=='C') C++;
            else if(answer[i]=='D') D++;
        }
        if(A>n) A=n;
        if(B>n) B=n;
        if(C>n) C=n;
        if(D>n) D=n;
        cout << (A+B+C+D) << "\n";
    }
    return 0;
}