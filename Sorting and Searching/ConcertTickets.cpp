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
const int MAX_N = 1e6 + 5;
void solve(int tc = 0) {
        // multiset upper bound and lowerbound
        int n, m; cin >> n >> m;
        multiset<int>ms;
        while(n--){
                int x; cin >> x;
                ms.insert(x);
        } 
        while(m--){
                int x; cin >> x;
                auto it = ms.upper_bound(x);
                if(it == ms.begin()){
                        cout << -1 << "\n";
                }else{
                        it = prev(it);
                        cout<< (*it) <<"\n";
                        ms.erase(it);
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