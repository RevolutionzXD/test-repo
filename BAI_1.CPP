#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 5;
const int INF = 1e9;

int arr[MAXN];
int numArr;

// First change

signed main()
{

    cin >> numArr;
    for (int i = 1; i <= numArr; ++i)
        cin >> arr[i];
    int resMin = INF;
    int resMax = -INF;
    for (int i = 1; i <= numArr; ++i)
    {
        if (arr[i] & 1)
            resMax = max(resMax, arr[i]);
        else
            resMin = min(resMin, arr[i]);
    }
    cout << resMin << '\n'
         << resMax << '\n';

    return 0;
}
