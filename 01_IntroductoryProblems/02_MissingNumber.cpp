/*https://cses.fi/problemset/task/1083*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long Es;
    Es = (n*(n+1))/2;

    long long Rs;
    Rs = 0;
    for (int input = 1; input < n; input++ ) {
        long long x;
        cin >> x;
        Rs = Rs + x;
    }

    long long Ms;
    Ms = Es - Rs;

    cout << Ms;


}