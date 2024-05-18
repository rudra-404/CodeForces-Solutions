#include<bits/stdc++.h> 
using namespace std;
int main(){
	string username;
	cin>>username;
	set<char> userset;
	for(int i=0; i<username.size(); i++){
		userset.insert(username[i]);
	}
	if(userset.size()%2==0){
		cout<<"CHAT WITH HER!";
	}else{
		cout<<"IGNORE HIM!";
	}
	return 0;
}