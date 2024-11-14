#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for(int i=0; i<str.size(); i++){
        if(str[i]=='a' || str[i]=='o' || str[i]=='y' || str[i]=='e' || str[i]=='u' || str[i]=='i') continue;
        cout<<"."<<str[i];
    }
    return 0;
}