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
struct fenwickTree{
        vector<int>tree;
        fenwickTree(int n){
                tree.assign(n+ 1 , 0);
        }
        void update(int idx , ll del){
                for(++idx; idx < (int)tree.size(); idx +=(idx & -idx)){
                        tree[idx] += del;
                }
        }
        ll query(int idx){
                ll sum = 0;
                for(++ idx ; idx > 0; idx -= (idx & -idx)){
                        sum += tree[idx];
                }
                return sum;

        }
        ll query(int left , int right ){
                return query(right) - query(left - 1);
        }
};
void solve(int tc = 0){
}

int main() {
    fastio;
    int tc = 1;
    for(int t = 1 ; t <= tc ; t++){
        solve(t);
    }
    return 0;
}