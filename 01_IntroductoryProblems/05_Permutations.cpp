/*https://cses.fi/problemset/task/1070*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
    } 

    else {
        for (int i = 2; i < n + 1; i = i + 2) {
            cout << i << " ";

    }

        for (int i = 1; i < n + 1; i = i + 2) {
            cout << i << " ";
    }
    }
}