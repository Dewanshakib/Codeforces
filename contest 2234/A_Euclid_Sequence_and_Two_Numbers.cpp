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

        for (int i = 0; i < l - 1; i++)
        {
            if (n[i] % n[i + 1] == 0 && (l == 2))
            {
                cout << n[i] << " " << n[i + 1];
                break;
            }
            else if (n[i] % n[i + 1] == n[i + 2] && (l >= 3))
            {
                cout << n[i] << " " << n[i + 1];
                break;
            }
            else
            {
                cout << -1;
                break;
            }
        }

        cout << endl;
    }

    return 0;
}