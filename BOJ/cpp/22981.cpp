#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> intp;

void init_code() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

const int mod=1e9+7;
const int INF=0x3F3F3F3F;

int main() {
	init_code();

	ll n, k;
	cin >> n >> k;
	vector<ll> v(n);
	rep(i, n) cin >> v[i];
	sort(v.begin(), v.end());
	ll ans=LLONG_MAX;
	for (int i=1; i<n; i++) {
		ll slo=v[0]*i;
		ll fas=v[i]*(n-i);
		ll tmp=(k+slo+fas-1)/(slo+fas);
		ans=min(ans, tmp);
	}
	cout << ans;

	return 0;
}
