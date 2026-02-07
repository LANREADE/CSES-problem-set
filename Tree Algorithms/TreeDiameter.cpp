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
const int N = 2e5 + 5; 
vi tree[N];
int maxDepth , farNode;
void dfs(int node , int parent , int depth){
        if(depth > maxDepth){
                maxDepth = depth;
                farNode = node;
        }
        for(int child : tree[node]){
                if(child != parent ){
                        dfs(child , node , depth + 1);
                }
        }
}
pii treeDiameter(){
        maxDepth = -1;
        dfs(1 , 0 , 0);
        int node1 = farNode;
        maxDepth = -1;
        dfs(node1 , 0 ,0 );
        int node2 = farNode;

        return mp(node1 , node2);
        
}
void solve(int tc = 0){
        int n; cin >> n;
        for(int i = 1 ; i < n; i++){
                int a, b;
                cin >> a >> b;
                tree[a].push_back(b);
                tree[b].push_back(a);
        }
        pii endpoints = treeDiameter();
        cout << maxDepth << "\n";
}
int main() {
    fastio;
    int tc = 1;
    for(int t = 1 ; t <= tc ; t++){
        solve(t);
    }
    return 0;
}