#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--) {
        set<int> brands;
        int shelves, bottles;
        cin >> shelves >> bottles;
        int brandAndCost[bottles][2];
        for (int i=0; i<bottles; i++) {
            cin >> brandAndCost[i][0] >> brandAndCost[i][1];
            brands.insert(brandAndCost[i][0]);
        }
        if (shelves >= brands.size()) {
            int result = 0;
            for (int i=0; i<bottles; i++) result += brandAndCost[i][1];
            cout << result << "\n";
        } else {
            auto it = brands.begin();
            int result[brands.size()] = {0};
            for (int i=0; i<brands.size(); i++, it++) {
                for (int j=0; j<bottles; j++) {
                    if (*it == brandAndCost[j][0]) {
                        result[i] += brandAndCost[j][1];
                    }
                }
            } sort(result, result + brands.size());
            int finalResult = 0;
            int length = sizeof(result) / sizeof(result[0]);
            for (int i=length-1; i>=(length-shelves); i--) {
                finalResult += result[i];
            } cout << finalResult << "\n";
        }
    }
    return 0;
}