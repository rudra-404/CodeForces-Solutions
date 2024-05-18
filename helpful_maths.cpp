#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	for(int i=0; i<str.size(); i+=2){
		int min_val = i;
		for(int j=i+2; j<str.size(); j+=2){
			if(str[min_val]>str[j]){
				min_val = j;
			}
		}
		if(min_val != i){
			swap(str[i],str[min_val]);
		}
	}
	cout<<str;
	return 0;
}