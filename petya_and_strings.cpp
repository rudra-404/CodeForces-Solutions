#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin>>a;
	int b = a[0];
	if(b > 96){
		b -= 32;
		a[0] = b;
	}
	cout<<a;
}