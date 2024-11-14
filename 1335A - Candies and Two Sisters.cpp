#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case, candies, possibility;
    cin >> test_case;
    for (int i = 1; i <= test_case; i++)
    {
        cin >> candies;
        if (candies % 2 == 0) possibility = (candies / 2) - 1;
        else possibility = candies / 2;
        cout << possibility << endl;
    }
    return 0;
}