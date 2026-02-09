/*https://cses.fi/problemset/task/1069*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string apple;
    cin >> apple;

    int current = 1;
    int best = 1;

    for (int i = 1; i < apple.length(); i++) {
        if (apple[i] == apple[i - 1]) {
            current = current + 1;
        }
        else {
            current = 1;
        }

        best = max({current, best});
        
    }

    cout << best;
}