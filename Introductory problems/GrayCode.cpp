#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MAXd = 26;
int n;
vector<bool> vis; 
string toBinary(const int &mask) {
    string s(n, '0');
    for (int i = n - 1; i >= 0; i--) {
        if (mask & (1 << i)) {
            s[i] = '1';
        } else {
            s[i] = '0';
        }
    }
    return s;
}
 
void backtrack(int mask) {
    vis[mask] = true;
    cout << toBinary(mask) << "\n";
    for (int i = 0; i < n; i++) {
        int nmask = mask ^ (1 << i);
        if (!vis[nmask]) {
            backtrack(nmask);
        }
    }
}
 
void solve(int tc = 0) {
    cin >> n;
    vis.assign(1 << n, false);
    backtrack(0);
}
 
signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc = 1;
    for (int t = 1; t <= tc; t++) {
        solve(t);
    }
}