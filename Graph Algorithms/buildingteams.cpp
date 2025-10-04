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
#define all(a) (a).begin(), (a).end()
#define se second
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;

vector<vi> adj;
vi team;
bool isPossible = true;

void dfs(int v, int t) {
    team[v] = t;
    for (int u : adj[v]) {
        if (team[u] == -1) {
            dfs(u, 1 - t);
        } else if (team[u] == t) {
            isPossible = false;
        }
    }
}

void solve( int tc = 0 ) {
    int n, m;
    cin >> n >> m;

    adj.resize(n);
    team.assign(n, -1);
    isPossible = true;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--; 
        b--; 
        adj[a].pb(b);
        adj[b].pb(a);
    }

    for (int i = 0; i < n; i++) {
        if (team[i] == -1) {
            dfs(i, 0);
        }
    }

    if (!isPossible) {
        cout << "IMPOSSIBLE\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << team[i] + 1 << " ";
    }
    cout << "\n";
}

int main() {
    fastio;
    int tc = 1;
    for(int t = 1 ; t <= tc ; t++){
        solve(t);
    }
    return 0;
}