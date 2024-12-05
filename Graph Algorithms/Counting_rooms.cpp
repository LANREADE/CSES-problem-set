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
        int n ,m;
        cin >> n >> m;
        vector<string>grid(n);
        for(int i = 0 ; i < n; i++){
                cin >> grid[i];
        }
        vector<vector<bool>>visited(n , vector<bool>(m , false));
        int rooms = 0; 

        vi dx = {-1 , 1, 0 ,0};
        vi dy = {0 , 0 , -1 , 1};

        function<void(int , int)>dfs =[&](int x , int y){
                visited[x][y] = true;
                for(int dir = 0; dir < 4 ;dir++){
                        int nx = x + dx[dir];
                        int ny = y + dy[dir];
                        if(nx >= 0 && nx <n && ny >= 0 && ny < m && grid[nx][ny] == '.' && !visited[nx][ny] ){
                                dfs( nx , ny);
                        }
                }
        };
        for(int i = 0 ; i < n; i++){
                for(int j = 0; j < m; j++){
                        if(grid[i][j] == '.' && !visited[i][j]){
                                dfs(i , j);
                                rooms++;
                        }
                }
        }
        cout << rooms << "\n";
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