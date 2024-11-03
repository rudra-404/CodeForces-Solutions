#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin>>a;
	int n=a.size(),up=0,low=0;
	int arr[n];
	for(int i=0; i<n; i++){
		arr[i]=a[i];
		if(arr[i]>=65 && arr[i]<=90) up++;
		else low++;
	}if(up>low){
		for(int i=0; i<n; i++){
			a[i]=towupper(a[i]);
		}
		cout<<a;
	}else{
		for(int i=0; i<n; i++){
			a[i]=towlower(a[i]);
		}
		cout<<a;
	}
	return 0;
}