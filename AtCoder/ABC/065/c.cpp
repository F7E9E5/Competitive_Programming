#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> intp;

const int mod=1e9+7;
const int INF=0x3F3F3F3F;

ll ans=0;
int n, m, q;
vector<vector<int>> a;
vector<int> t;

void sol(int now, int las) {
	if (now==n) {
		ll tmp=0;
		rep(j, q) {
			if (t[a[j][1]-1]-t[a[j][0]-1]==a[j][2]) {
				tmp+=a[j][3];
			}
		}
		ans=max(ans, tmp);
		return;
	}
	for (int i=las; i<=m; i++) {
		t[now]=i;
		sol(now+1, i);
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	cin >> n >> m >> q;
	a=vector<vector<int>>(q, vector<int>(4));
	rep(i, q) rep(j, 4) cin >> a[i][j];
	t.resize(n);
	sol(0, 1);
	cout << ans;

	return 0;
}
