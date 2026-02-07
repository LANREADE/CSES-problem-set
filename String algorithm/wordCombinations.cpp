#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define ld long double
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
const int MAX_N = 1e6 + 5;
const int MAX_V = 26;
class Trie {
private:
    bool stop[MAX_N];
    int trie[MAX_N][MAX_C];
    int count = 0;
 
public:
    int dp[5005];
    void insert(string s) {
        int node = 0;
        for (size_t i = 0; i < s.size(); i++) {
            if (!trie[node][s[i]-'a']) trie[node][s[i]-'a'] = ++count;
            node = trie[node][s[i]-'a'];
        }
        stop[node] = 1;
    }
 
    int search(int x) {
        int node = 0, result = 0;
        for (size_t i = x; i < s.size(); i++) {
            if (!trie[node][s[i]-'a']) return result;
            node = trie[node][s[i] - 'a'];
            if (stop[node]) {
                (result += dp[i+1]) %= MOD;
            }
        }
        return result;
    }
};

void solve() {
    cin >> s;
    int k;
    cin >> k;
    Trie trie; 
    while (k--) {
        string x;
        cin >> x;
        trie.insert(x); 
    }
    trie.dp[s.size()] = 1;
    for (int i = s.size() - 1; i >= 0; i--) {
        trie.dp[i] = trie.search(i); 
    }
    cout << trie.dp[0] << '\n';
}


signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve(t);
    }
}