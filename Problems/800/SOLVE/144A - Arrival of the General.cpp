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
    int n, max_height=-1, min_height=101, max_position=-1, min_position=-1, heights, result;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> heights;
        if (heights > max_height) {
            max_height = heights;
            max_position = i;
        }
        if (heights <= min_height) {
            min_height = heights;
            min_position = i;
        }
    }
    if (min_position > max_position) result = max_position + (n-1-min_position);
    else result = max_position + (n-1-min_position) - 1;
    cout << result;
}

int main() {
    fast;
    solve();
    return 0;
}