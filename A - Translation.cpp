#include<bits/stdc++.h>
using namespace std;
int main(){
	string s, t;
	cin>>s>>t;
	int count=0, j=s.size()-1;
	for(int i=0; i<s.size(); i++){
		if(s[i]==t[j]){
			count++;
		}
		j--;
	}
	if(count==s.size()) cout<<"YES";
	else cout<<"NO";
	return 0;
}