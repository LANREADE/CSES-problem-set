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
const int INF = INT_MAX;
const int N = 2e5 + 5;
int n , a , b , cnt;
vector<int>adj[N];
bool used[N];
void dfs(int u = 1 , int par = 0){
        for(int v : adj[u]){
                if(v != par)dfs(v , u);
        }
        if(!used[par] && !used[u] && par != 0){
                used[par] = used[u] = true;
                cnt++;
        }

}
void solve() {
    cin >> n; 
    for(int i = 0; i <n ; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1 , 0);
    cout << cnt << '\n';
}
int main() {
    fastio;
    int tc = 1;
    while (tc--) {
        solve();
    }
    return 0;
}