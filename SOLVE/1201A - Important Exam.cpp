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
    int n, m;
    cin >> n >> m;
    vector<string> answers(n);
    for (int i = 0; i < n; i++) {
        cin >> answers[i];
    }
    vector<int> marks(m);
    for (int i = 0; i < m; i++) {
        cin >> marks[i];
    }
    int result = 0;
    for (int i = 0; i < m; i++) {
        unordered_map<char, int> frequency;
        for (int j = 0; j < n; j++) {
            frequency[answers[j][i]]++;
        }
        int max_freq = INT_MIN;
        for (auto it:frequency) {
            if (max_freq < it.second) {
                max_freq = it.second;
            }
        }
        result += (marks[i] * max_freq);
    }
    cout << result << endl;
}

int main() {
    fast;
    solve();
    return 0;
}