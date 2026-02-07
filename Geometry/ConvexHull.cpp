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



int main() {
    fastio;
    int tc = 1;
    for(int t = 1 ; t <= tc ; t++){
        solve(t);
    }
    return 0;
}