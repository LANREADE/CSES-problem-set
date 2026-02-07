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
#define se second
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;
void solve(int tc = 0) {
        int n , a , b; cin >> n >> a >> b;
        vector<vector<ld>>dp(n + 1 ,vector<ld>(6 * n + 1));
        dp[0][0] = 1;
        for(int i = 1; i <= n; i++){
                for(int j = 6 * i; j > 0;j--){
                        for(int k = 1 ; k <= 6 && j - k >= 0; k++){
                                
                        }
                }
        }
        
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