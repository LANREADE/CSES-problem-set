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
vector<vector<int>> adj;
vector<int>vis;
void dfs(int v ){
        vis[v] = true;
        for(int u : adj[v]){
                if(!vis[u]){
                        dfs(u);
                }
        }
}
void solve() {
        int n, m; cin >> n >> m;
        adj.resize(n);
        vis.assign(n , false);
        vector<pii>roads;
        for(int i = 0; i < m; i++){
                int a, b;
                cin >>  a >> b;
                a--;
                b--;
                adj[a].push_back(b);
                adj[b].push_back(a);
                roads.push_back({a , b});
        }
        vector<pii> newRoads;
        for(int i = 0 ; i < n; i++){
                if(!vis[i]){
                        if(i > 0){
                                newRoads.push_back({i - 1 , i});
                        }
                        dfs(i);
                }
        }
        cout << newRoads.size() << "\n";
        for(auto road : newRoads){
                cout<< road.first  + 1 << " " << road.second + 1 << "\n";
        }
}
int main() {
    fastio;
    int tc = 1; 
    while (tc--) {
        solve();
    }
    return 0;
}