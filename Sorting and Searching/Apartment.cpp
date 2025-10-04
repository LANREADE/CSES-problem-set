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
#define all(a) (a).begin(), (a).end()
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;
void solve(int tc = 0) {
        int n, m , k ;
        cin >> n >> m >> k;
        vector<int> a(n) ,b (m);
        for(int &x : a)cin  >> x;
        for(int & x : b) cin >> x;
        sort(all(a));
        sort(all(b));
        int cnt = 0;
        for(int i = 0, j = 0; i < n && j < m;){
                if(b[j] < a[i] - k){
                        j++;
                }else if(b[j] > a[i] + k){
                        i++;
                }else{
                        cnt++;
                        i++;
                        j++;
                }
        }
        cout  << cnt << "\n";

}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc = 1;
    for (int t = 1; t <= tc; t++) {
        solve(t);
    }
}