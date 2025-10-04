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
void solve (int tc = 0){
        ll a, b;
        cin >> a >> b;
        cout << (((a + b) % 3 || min ( a , b) < (a + b) / 3) ? "NO" : "YES") << "\n";
}
signed main() {
    fastio;
    int tc = 1;
    cin >> tc;
    for(int t = 1 ; t <= tc; t++){
        solve(t);
    }
}