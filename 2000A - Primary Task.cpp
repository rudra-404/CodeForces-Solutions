#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int test_case;
    bool checking_right_wrong;
    cin>>test_case;
    string num_str;
    while(test_case--){
        checking_right_wrong = false;
        cin>>num_str;
        if(num_str[0]=='1' && num_str[1]=='0' && num_str.size()>=3)
        {
            if(num_str.size()==3)
            {
                if(num_str[2]!='0' && num_str[2]!='1')
                {
                    checking_right_wrong = true;
                }
            }
            else if((num_str.size()==4 || num_str.size()==5) && num_str[2]!='0')
            {
                checking_right_wrong = true;
            }
        }
        if(checking_right_wrong) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}