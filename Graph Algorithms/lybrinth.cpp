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

vector<char>path ;
const int dr[] = { -1 , 1 , 0 ,0};
const int dc[] = { 0, 0 , -1  , 1};

bool dfs(int &sr , int &sc , vector<vector<char>> &grid , vector<vector<char>>& dirs , vector<vector<bool>>& vis ){
        int n = grid.size();
        int m = grid[0].size();
        // using a queue 
        queue<pii>q;
        q.push({sc, sr});
        vis[sr][sc] = true;
        while(!q.empty()){
                int r = q.front().first;
                int c = q.front().second;
                q.pop();

                if(grid[r][c] == 'B'){
                        while(1){
                                path.pb(dirs[r][c]);
                                r += (path.back() == 'U') - (path.back() == 'D');
                                c += (path.back() == 'L') - (path.back() == 'R');
                        }
                }
        }
}

void solve() {
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