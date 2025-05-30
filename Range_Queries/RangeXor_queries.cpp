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
        int n, q;
        cin >> n >> q;

        vl prefix_Sum( n + 1 );
        prefix_Sum[0] = 0;
        for(int i = 1 ; i <= n ; i++){
                int x;
                cin >> x;
                prefix_Sum[i] = prefix_Sum[i - 1] + x;
        }
        for(int i = 0 ; i < q ; i++){
                int a , b;
                cin >> a >> b;

                ll result = prefix_Sum[b] - prefix_Sum[ a - 1];
                cout << result << "\n";
        }
}

int main() {
    fastio;

    int tc = 1; // Number of test cases
    // cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}