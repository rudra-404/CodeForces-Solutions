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
        string str, re_str;
        int count=1;
        getline(cin, str);
        if(str=="{}") cout<<0<<endl;
        else{
            for(int i=1; i<str.size()-1; i+=3) re_str+=str[i];
            sort(re_str.begin(), re_str.end());
            for(int i=1; i<re_str.size(); i++) if(re_str[i]!=re_str[i-1]) count++;
            cout<<count<<endl;
        }
    }

    int main() {
        fast;
        solve();
        return 0;
    }