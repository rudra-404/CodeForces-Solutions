#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[5][5], i, j, x;
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			cin>>arr[i][j];
			if(arr[i][j]==1){
				x = abs(i-2)+abs(j-2);
			}
		}
	}
	cout<<x;
	return 0;
}