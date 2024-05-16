#include<bits/stdc++.h>
using namespace std;
int main(){
	int count=0;
	string lucky_number;
	cin>>lucky_number;
	for(int i=0; i<lucky_number.size(); i++){
		if(lucky_number[i]=='4' || lucky_number[i]=='7'){
			count++;
		}
	}
	if(count==4 || count==7) cout<<"YES";
	else cout<<"NO";
	return 0;
}