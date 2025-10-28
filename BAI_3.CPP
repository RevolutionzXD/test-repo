

#include<bits/stdc++.h>

using namespace std;


const int MAXN = 1e5 + 5;
const int INF = 1e9;


int arr[MAXN];
int numArr;










signed main() {

    cin >> numArr;
    for (int i = 1; i <= numArr; ++i) cin >> arr[i];
    sort(arr + 1, arr + numArr + 1);
    for (int i = 1; i <= numArr; ++i) cout << arr[i] << " ";






    return 0;

}



















