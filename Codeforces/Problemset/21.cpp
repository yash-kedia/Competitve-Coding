//Link::https://codeforces.com/contest/1343/problem/B

#include<bits/stdc++.h>
using namespace std;
#define sr sort(arr,arr+n);
typedef long long int ll;

int main() {
	ll t; cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		if (n % 4 == 0) {
			cout << "YES\n";
			ll e = 2;
			ll o = 1;
			ll sum = 0;
			ll rt = 0;
			for (ll i = 0; i < n / 2; i++) {
				cout << e << " ";
				sum = sum + e;
				e = e + 2;

			}

			for (ll i = 0; i < n / 2 - 1; i++) {
				if (rt <= sum) {
					cout << o << " ";
					rt = rt + o;
					o = o + 2;

				}

			}
			cout << sum - rt;
			cout << "\n";
		} else {
			cout << "NO\n";
		}

	}


}
