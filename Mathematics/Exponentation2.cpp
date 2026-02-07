#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
ll qexp(ll a, ll b, ll m) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
void solve(int tc = 0) {
    int a, b, c; cin >> a >> b >> c;
    cout << qexp(a, qexp(b, c, MOD - 1), MOD) << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve(t);
    }
}