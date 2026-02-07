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
const int MAX_N = 2e5 + 5;
int n;
vi adj[MAX_N];
vi res(MAX_N  , - 1);
int bfs(int src){
        queue<int>q;
        vi dist(n + 1 , - 1);
        dist[src] = 0;
        res[src] = max(res[src] , dist[src]);
        q.push(src);
        int top = src;
        while(!q.empty()){
                top = q.front();
                q.pop();

                for(int v : adj[top]){
                        if(dist[v] == - 1){
                                q.push(v);
                                dist[v] = dist[top] + 1;
                                res[v] = max(res[v] , dist[v]);
                        }
                }
        }
        return top;
}
void solve(int tc = 0) {
        int u , v ;
        cin >> n;
        for(int i = 0; i < n- 1; i++){
                cin >> u >> v;
                adj[u].push_back(v);
                adj[v].push_back(u);
        }
        int de1 = bfs(1);
        int de2 = bfs(de1);
        bfs(de2);
        for(int i = 1 ; i <= n; i++){
                cout << res[i] << " ";
        }
        cout << '\n';
}
int main() {
    fastio;
    int tc = 1;
    while (tc--) {
        solve();
    }
    return 0;
}