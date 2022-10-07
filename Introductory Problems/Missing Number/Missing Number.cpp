#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    long n, a;
    cin >> n;
    long ans = (n * (n + 1)) / 2;
    while(n-- > 1) {
        cin >> a;
        ans -= a;
    }
    cout << ans;
    return 0;
}