#include<bits/stdc++.h>
using namespace std;
int main(){
	unsigned int arr[4];
	for(int i=0; i<4; i++) cin>>arr[i];
	sort(arr,arr+4);
	int c=arr[3]-arr[0];
	int b=arr[1]-c;
	int a=arr[3]-(b+c);
	cout<<a<<" "<<b<<" "<<c;
	return 0;
}