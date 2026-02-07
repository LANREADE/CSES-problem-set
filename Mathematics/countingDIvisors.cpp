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

void solve( int tc = 0){
        int n; cin >> n;
        int ans  = 0;
        for(int i = 1; i * i <= n; i++){
                if( n % i == 0){
                        ans++;
                        if(i * i != n) ans++;
                }
        }
        cout << ans << "\n";
}
signed main(){
        fastio;
        int tc; cin  >> tc;
        for(int t = 0 ; t <= tc ; tc++){
                solve(t);
        }
}