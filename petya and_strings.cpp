#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	for(int i=0; i<a.size(); i++){
		a[i]=towupper(a[i]);
		b[i]=towupper(b[i]);
	}
	for(int i=0; i<a.size(); i++){
		if(a[i]==b[i]){
			continue;
		}else if(a[i]>b[i]){
			cout<<1<<endl;
			break;
		}else{
			cout<<-1<<endl;
			break;
		}
	}
    if(a==b){
		cout<<0<<endl;
	}
    return 0;
}