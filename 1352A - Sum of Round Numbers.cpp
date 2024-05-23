#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int value;
		cin>>value;
		int count=0, v_1000=0, v_100=0, v_10=0;
		v_1000 = value - value%1000;
		value = value%1000;
		v_100 = value - value%100;
		value = value%100;
		v_10 = value - value%10;
		value = value%10;
		if(v_1000 != 0) count++;
		if(v_100 != 0) count++;
		if(v_10 != 0) count++;
		if(value != 0) count++;
		cout<<count<<endl;
		if(v_1000 != 0) cout<<v_1000<<" ";
		if(v_100 != 0) cout<<v_100<<" ";
		if(v_10 != 0) cout<<v_10<<" ";
		if(value != 0) cout<<value<<" ";
		cout<<endl;
	}
	return 0;
}