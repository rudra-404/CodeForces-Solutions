#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, anton=0, danik=0;
	string game;
	cin>>n>>game;
	for(int i=0; i<game.size(); i++){
		if(game[i]=='A') anton++;
		else danik++;
	}
	if(anton==danik)cout<<"Friendship";
	else if(anton>danik)cout<<"Anton";
	else cout<<"Danik";
	return 0;
}