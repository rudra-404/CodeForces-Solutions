#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, t;
	string line;
	cin>>n>>t>>line;
	for(int i=1; i<=t; i++){
		for(int j=0; j<line.size(); j++){
			if(line[j]=='B' && line[j+1]=='G'){
				line[j]='G';
				line[j+1]='B';
				j++;
			}
		}
	}
	cout<<line;
	return 0;
}