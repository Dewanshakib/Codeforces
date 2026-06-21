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

        vector<int> n(l);

        for (int i = 0; i < l; i++)
        {
            cin >> n[i];
        }

        sort(n.begin(), n.end());
        reverse(n.begin(), n.end());

        if (l == 2)
        {
            cout << n[0] << " " << n[1] << endl;
            continue;
        }

        bool flag = true;
        for (int i = 0; i < l - 2; i++)
        {
            if (n[i] % n[i + 1] != n[i + 2])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << n[0] << " " << n[1] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}