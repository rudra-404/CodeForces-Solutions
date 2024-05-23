#include<bits/stdc++.h>
using namespace std;
int main(){
	int balance;
	cin>>balance;
	int notes = balance/100;
	int left_balance = balance%100;
	notes += (left_balance/20);
	left_balance = left_balance%20;
	notes += (left_balance/10);
	left_balance = left_balance%10;
	notes += (left_balance/5);
	left_balance = left_balance%5;
	notes += left_balance;
	cout<<notes;
	return 0;
}