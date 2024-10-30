#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n;
    string number;
    cin >> n >> number;
    int first_half_sum=0, second_half_sum=0, digit[n];
    for(int i=0; i<n; i++){
        if(number[i] == '4' || number[i] == '7'){
            digit[i] = number[i] - 48;
            if(i < (n/2)){
                first_half_sum += digit[i];
            }else{
                second_half_sum += digit[i];
            }
        }else{
            cout << "NO";
            return 0;
        }
    }
    if(first_half_sum == second_half_sum) cout << "YES";
    else cout << "NO";
    return 0;
}