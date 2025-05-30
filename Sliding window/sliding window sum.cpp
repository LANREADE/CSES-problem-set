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
void solve() {
        ll n , k;
        cin >> n >> k;
        ll x , a , b ,c;
        cin >> x >> a >> b >> c;
        vector<ll> win(k);
        ll curr = x;
        ll win_sum = 0;
        ll rXor = 0;
        for(int i = 0; i < k; i++){
                if( i > 0){
                        curr = ( a*curr + b) % c;
                }
                win[i] = curr;
                win_sum  += curr;
        }
        for(int i = k; i < n; i ++){
                curr = ( a * curr + b ) % c;
                win_sum -= win[k];
                win_sum += curr;

                win[i % k] = curr;
                rXor ^= win_sum;
        }
        cout << rXor << "\n";
}

int main() {
    fastio;
    int tc = 1;
    while (tc--) {
        solve();
    }

    return 0;
}