#include<bits/stdc++.h>
using namespace std;
int main(){
	int year;
	cin>>year;
	int first_digit;
	int second_digit;
	int third_digit;
	int fourth_digit;
	for(;;){
		year++;
		first_digit = year/1000;
		second_digit = (year/100)%10;
		third_digit = (year/10)%10;
		fourth_digit = year%10;
		if(first_digit!=second_digit && third_digit!=second_digit && fourth_digit!=second_digit && first_digit!=third_digit && first_digit!=fourth_digit && fourth_digit!=third_digit){
			cout<<year;
			break;
		}
	}
	return 0;
}