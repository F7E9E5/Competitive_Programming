#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;

typedef long long ll;
typedef pair<int, int> intp;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n;
	cin >> n;
	string s("SciComLove");
	n%=(int)s.size();
	cout << s.substr(n)+s.substr(0, n);

	return 0;
}
