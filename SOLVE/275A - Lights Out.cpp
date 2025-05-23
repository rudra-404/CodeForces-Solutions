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

int output [3] [3] = {
    {1, 1, 1},
    {1, 1, 1},
    {1, 1, 1}
};

void solve() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int temp;
            cin >> temp;
            if (temp & 1) {
                output [i] [j] = (output [i] [j] == 1 ? 0 : 1);
                // for up
                if (i - 1 >= 0) output [i - 1] [j] = (output [i - 1] [j] == 1 ? 0 : 1);
                // for down
                if (i + 1 < 3) output [i + 1] [j] = (output [i + 1] [j] == 1 ? 0 : 1);
                // for left
                if (j - 1 >= 0) output [i] [j - 1] = (output [i] [j - 1] == 1 ? 0 : 1);
                // for right
                if (j + 1 < 3) output [i] [j + 1] = (output [i] [j + 1] == 1 ? 0 : 1);
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << output [i] [j];
        cout << endl;
    }
}

int main() {
    fast;
    solve();
    return 0;
}