
#include<bits/stdc++.h>

using namespace std;


const int MAXN = 1e5 + 5;
const int INF = 1e9;


int arr[MAXN];
int numArr, numK;










signed main() {

    cin >> numArr >> numK;
    for (int i = 1; i <= numArr; ++i) cin >> arr[i];
    sort(arr + 1, arr + numArr + 1, greater<int>());
    cout << arr[numK];






    return 0;

}



















