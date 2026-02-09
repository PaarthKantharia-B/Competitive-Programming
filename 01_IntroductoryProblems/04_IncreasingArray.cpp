/*https://cses.fi/problemset/task/1094*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<int> v(n);
    long long x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v[i] = x;
    }
    long long counter;
    counter = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] < v[i - 1]) {
            long long difference;
            difference = v[i - 1] - v[i];
            counter = counter + difference;
        }
    }
    cout << counter;
     
    }
