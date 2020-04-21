//Link:: https://codeforces.com/contest/1343/problem/A

#include<bits/stdc++.h>
using namespace std;
#define sr sort(arr,arr+n);
typedef long long int ll;

int main() {
	ll t; cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll sum = 3;
		ll y = 2;
		while ((n % sum) != 0) {
			sum = sum + pow(2, y);
			y++;
		}
		cout << n / sum << "\n";
	}


}
