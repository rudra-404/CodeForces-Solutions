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
    string a, b;
	cin >> a >> b;
	for(int i = 0; i < a.size(); i++) {
		a[i] = towupper(a[i]);
		b[i] = towupper(b[i]);
	}
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == b[i]) {
			continue;
		} else if(a[i] > b[i]) {
			cout << 1 <<endl;
			break;
		} else {
			cout << -1 << endl;
			break;
		}
	}
    if (a == b) cout << 0 << endl;
}

int main() {
    fast;
    solve();
    return 0;
}