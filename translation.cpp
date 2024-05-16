#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	int count=0, j=a.size()-1;
	for(int i=0; i<a.size(); i++){
		if(a[i]==b[j]){
			count++;
		}
		j--;
	}
	if(count==a.size()) cout<<"YES";
	else cout<<"NO";
	return 0;
}