#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, count=0;
	cin>>n;
	string a;
	cin>>a;
	for(int i=0; i<n; i++){
		a[i] = tolower(a[i]);
	}
	sort(a.begin(), a.end());
	for(int i=0; i<n; i++){
		if(a[i]!=a[i+1]) count++;
	}
	if(count==26) cout<<"YES";
	else cout<<"NO";
	return 0;
}