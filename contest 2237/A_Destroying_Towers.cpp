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
        vector<int> t(l);

        for (int i = 0; i < l; i++)
        {
            cin >> t[i];
        }

        for (int i = 0; i < l - 1; i++)
        {
            if (t[i] < t[i + 1])
            {
                t[i + 1] = t[i];
            }
        }

        int s = 0;
        for (int i = 0; i < l; i++)
        {
            s += t[i];
        }

        cout << s << endl;
    }

    return 0;
}