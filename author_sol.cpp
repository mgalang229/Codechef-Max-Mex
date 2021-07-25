#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        // create a set
        set<int> s;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            // insert all the elements that are not equal to 'm' in a set
            if (x != m) {
                s.insert(x);
                ans++;
            }
        }
        // count the frequency of the MEX in the sequence (start from 1)
        int mex = 1;
        // if the set encounters an element that is not within it, then the loop will stop
        while (s.count(mex)) {
            // otherwise, proceed to the next number
            mex++;
        }
        // check if the MEX in the current sequence is not equal to 'n'
        if (mex != m) {
            // if yes, then set 'ans' to -1
            ans = -1;
        }
        cout << ans << '\n';
    }
    return 0;
}
