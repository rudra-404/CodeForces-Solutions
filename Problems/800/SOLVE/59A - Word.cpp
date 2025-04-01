/* A u t h o r :

╭━━━╮╱╱╱╱╭╮╱╱╱╱╱╭╮╭━╮
┃╭━╮┃╱╱╱╱┃┃╱╱╱╱╱┃┃┃╭╯
┃╰━╯┣╮╭┳━╯┣━┳━━╮┃╰╯╯╭━━┳┳━━┳━━┳━╮
┃╭╮╭┫┃┃┃╭╮┃╭┫╭╮┃┃╭╮┃┃╭╮┣┫━━┫┃━┫╭╯
┃┃┃╰┫╰╯┃╰╯┃┃┃╭╮┃┃┃┃╰┫╭╮┃┣━━┃┃━┫┃
╰╯╰━┻━━┻━━┻╯╰╯╰╯╰╯╰━┻╯╰┻┻━━┻━━┻╯

R u d r a    K a i s e r */

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define ll long long
#define endl '\n'

void solve() {
    string a;
	cin >> a;
	int n = a.size(), up = 0, low = 0;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = a[i];
		if (arr[i] >= 65 && arr[i] <= 90) up++;
		else low++;
	} if(up > low) {
		for (int i = 0; i < n; i++) {
			a[i] = towupper(a[i]);
		}
		cout << a;
	} else {
		for (int i = 0; i < n; i++) {
			a[i] = towlower(a[i]);
		}
		cout << a;
	}
}

int main() {
    fast;
    solve();
    return 0;
}