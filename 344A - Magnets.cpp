#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, count=1;
	cin>>n;
	string previous, present;
	cin>>previous;
	for(int i=1; i<n; i++){
		cin>>present;
		if(present!=previous) count++;
		previous = present;
	}
	cout<<count;
	return 0;
}