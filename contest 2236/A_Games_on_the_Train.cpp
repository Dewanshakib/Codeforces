#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l;
        cin >> l;
        vector<int> h(l);

        for (int i = 0; i < l; i++)
        {
            cin >> h[i];
        }

        int mx = *max_element(h.begin(), h.end());
        int mn = *min_element(h.begin(), h.end());

        cout << (mx - mn + 1) << endl;
    }

    return 0;
}