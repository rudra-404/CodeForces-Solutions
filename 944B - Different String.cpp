#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_case;
    cin>>test_case;
    for(int test=1; test<=test_case; test++){
        string str;
        cin>>str;
        int count = 1;
        for(int i=1; i<str.size(); i++){
            if(str[i]==str[i-1]){
                count++;
                continue;
            }
            break;
        }
        if(count==str.size()) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=1; i<str.size(); i++) swap(str[i],str[i-1]);
            cout<<str<<endl;
        }
    }
    return 0;
}