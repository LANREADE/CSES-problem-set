#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define umap unordered_map
#define uset unordered_set

#define rall(x) (x).rbegin(), (x).rend()
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair

const long long LLINF = LLONG_MAX;
const int INF = INT_MAX;
const int MOD = 1e9 + 7;

void buildSegmentTree(vi& arr, vi& tree, int node, int start, int end) {
    if (start == end) {
        tree[node] = arr[start];
    } else {
        int mid = (start + end) / 2;
        buildSegmentTree(arr, tree, 2 * node, start, mid);
        buildSegmentTree(arr, tree, 2 * node + 1, mid + 1, end);
        tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    }
}

int querySegmentTree(vi& tree, int node, int start, int end, int left, int right) {
    if (left > end || right < start) {
        return INT_MAX;
    } else if (left <= start && right >= end) {
        return tree[node];
    } else {
        int mid = (start + end) / 2;
        int left_min = querySegmentTree(tree, 2 * node, start, mid, left, right);
        int right_min = querySegmentTree(tree, 2 * node + 1, mid + 1, end, left, right);
        return min(left_min, right_min);
    }
}

void solve() {
    int n, q;
    cin >> n >> q;

    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int treeSize = 4 * n; 
    vi tree(treeSize);
    buildSegmentTree(arr, tree, 1, 0, n - 1);

    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;

        int min_val = querySegmentTree(tree, 1, 0, n - 1, a, b);
        cout << min_val << "\n";
    }
}

int main() {
    fastio;
    int tc = 1;
    while (tc--) {
        solve();
    }

    return 0;
}