#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int n;
    cin>>n;
    getchar();
    for(int i=1; i<=n; i++){
        getline(cin, str);
        swap(str[0],str[4]);
        cout<<str<<endl;
    }
    return 0;
}