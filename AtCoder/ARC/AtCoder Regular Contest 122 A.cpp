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

	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	vector<ll> fib(n+5);
	fib[0]=0;
	fib[1]=1;
	for (int i=2; i<=n+2; i++) {
		fib[i]=fib[i-1]+fib[i-2];
		fib[i]%=mod;
	}
	ll ans=a[0]*fib[n+1]%mod;
	// cout << ans << '\n';
	for (int i=1; i<n; i++) {
		ans+=a[i]*fib[i+1]%mod*fib[n+1-i]%mod;
		ans%=mod;
		ans-=a[i]*fib[i]%mod%mod*fib[n-i]%mod;
		ans%=mod;
	}
	cout << (ans+mod)%mod;

	return 0;
}
