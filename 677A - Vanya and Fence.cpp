#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,h,w=0;
	cin>>n>>h;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		if(a>h) w+=2;
		else w+=1;
	}
	cout<<w;
	return 0;
}