/*https://cses.fi/problemset/task/1092*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long sum = (n * (n+1))/2;
    long long targer = (sum/2);
    vector <int> real;
    vector <int> fake;

    if (sum % 2 == 0 ) {
        cout << "YES" << '\n';

        for (int i = n; i > 0; i--) {
            if (i <= targer ) {
                real.push_back(i);
                targer = targer - i; 
            }

            else {
                fake.push_back(i);
            }

        

        }
    cout << real.size() << '\n' ;
    for (long long x : real) cout << x << " ";
    cout << fake.size() << '\n';
    for (long long x : fake) cout << x << " ";

    }
    else {
        cout << "NO" << '\n';
    }


}