#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define ld long double
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define fi first
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define se second
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MAX_N = 1e6 + 5;
void solve(int tc = 0) {
        string s ; cin >> s;
        sort(all(s));
        vector<string>ans;
        do{
                ans.push_back(s);
        }while(next_permutation(all(s)));
        cout << sz(ans) << "\n";
        for(string x : ans) cout << x << "\n";   
}
signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve(t);
    }
}