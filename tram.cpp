#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int capacity = 0;
	int stillnow = 0;
	for(int i=0;i<n;i++){
		int passanger_out, passanger_in;
		cin>>passanger_out>>passanger_in;
		stillnow -= passanger_out;
		stillnow += passanger_in;
		capacity = max(capacity,stillnow);
	} 
	cout<<capacity;
	return 0;
}