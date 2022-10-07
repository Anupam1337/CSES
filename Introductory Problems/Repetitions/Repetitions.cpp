#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    string n;
    int ans = 0, curr_max = 0, j, i = 0;
    cin >> n;
    int N = n.size();
    while(i < N) {
        curr_max = 0;
        j = i;
        while((i < N) && (n[j] == n[i])) {
            curr_max++;
            i++;
        }
        ans = max(ans, curr_max);
    }
    cout << ans;
    return 0;
}