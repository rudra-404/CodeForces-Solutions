#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
	{
        int n;
        string s;
        cin>>n>>s;
        int root=sqrt(n);
        if (root*root != n)
		{
            cout<< "NO"<<endl;
            continue;
        }
 
        int k=root;
        bool isBeauty=true;
        for (int i = 0;i < k;i++)
		{
            if (s[i]!='1')
			{
                isBeauty=false;
                break;
            }
            if (s[n-k+i]!='1')
			{
                isBeauty=false;
                break;
            }
            if (s[i*k]!='1')
			{
                isBeauty=false;
                break;
            }
            if (s[i*k+k-1]!='1')
			{
                isBeauty=false;
                break;
            }
        }
        if (isBeauty)
		{
            for (int i=1;i<k-1;i++)
			{
                for (int j=1;j<k-1;j++)
				{
                    if (s[i*k+j]!='0')
					{
                        isBeauty=false;
                        break;
                    }
                }
                if (!isBeauty) break;
            }
        }
 
        if (isBeauty) cout << "YES\n";   
        else cout << "NO\n";
    }
    return 0;
}
