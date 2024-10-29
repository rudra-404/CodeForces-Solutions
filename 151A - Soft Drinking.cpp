#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = (k*l)/nl;
    int lime = c*d;
    int salt = p/np;
    int toast = min(drink, min(lime, salt)) / n;
    cout << toast;
    return 0;
}

/*
    A group of "n" friends decided to buy "k" bottles of a soft drink to warm up a bit.
    Each bottle has "l" milliliters of the drink. Also they bought "c" limes and cut each
    of them into "d" slices. After that they found "p" grams of salt. To make a toast,
    eachfriend needs "nl" milliliters of the drink, a slice of lime and "np" grams of salt.
*/