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
int powr(ll a , int b){
        int res = 1;
        while(b > 0){
                if( b & 1) res = (res * a ) % MOD;
                a = (a * a) % MOD;
                b >>= 1;
        }
        return res;
}
void solve( int tc = 0){
        int n; cin >> n;
        cout << powr(2, n) << "\n";
}
int main() {
    fastio;
    int tc = 1; 
    for(int t = 1 ; t <= tc; t++){
        solve(t);
    }
    return 0;
}