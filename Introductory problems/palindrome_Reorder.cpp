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
const int MAXd = 26;

void solve( int tc = 0){
    string s; cin >> s;
    vector<int>cnt(MAXd);
    for(char c : s) cnt[c - 'A']++;
    int odd = -1;
    for(int i = 0; i < MAXd; i++){
        if(cnt[i] % 2 ){
            if(odd != -1){
                cout << "NO SOLUTION\n";
                return;
            }else{
                odd = i;
                cnt[i]--;
            }
        }
    }
    string t1;
    for(int i = 0; i < MAXd; i++){
        t1 += string(cnt[i] / 2, 'A' + i);
    }
    string t2(t1.rbegin() , t1.rend());
    if(odd != -1 ) t1 += (char)( 'A' + odd);
    cout << t1 << t2 << "\n";
}
int main() {
    fastio;
    int tc = 1; 
    for(int t = 1 ; t <= tc; t++){
        solve(t);
    }
    return 0;
}