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

const long long LLINF = LLONG_MAX;
const int MOD = 1e9 + 7;
const int INF = INT_MAX


const int MAX_N = 2e5 + 5;
vi adj[MAX_N];
int surbordinates[MAX_N];

void dfs(int node , int parent ){
    surbordinates[node] = 1;
    for(int child : adj[node]){
        if(child != parent){
            dfs(child , node);
            surbordinates[node] += surbordinates[child];
        }
    }
}

void solve() {
    int n;
    cin >> n;
    for(int i = 2 ; i <= n ; i++ ){
        int manager;
        cin >> manager;
        adj[manager].pb(i);
    }
    dfs( 1 , 0);
    for(int i = 1; i < n ; i++){
        cout << surbordinates[i] - 1 << " ";
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