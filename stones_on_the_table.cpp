#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,count=0;
	cin>>n;
	string arr;
	cin>>arr;
	for(int i=1; i<n; i++){
		if(arr[i-1]==arr[i]) count++;
	}
	cout<<count;
	return 0;
}