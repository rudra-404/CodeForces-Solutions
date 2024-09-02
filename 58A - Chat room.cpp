#include<bits/stdc++.h>
using namespace std;
int main(){
    string str_written, str_main = "hello";
    cin>>str_written;
    int i, j=0;
    for(i=0; i<str_written.size(); i++){
        if(str_written[i]==str_main[j]){
            j++;
            if(j==5) break;
        }
    }
    if(j==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}