#include<bits/stdc++.h>

using namespace std;

template<class T> bool maximize(T &a, const T &b) {
    return a < b ? a = b, 1 : 0;
}

const int MAXN = 1e5 + 5;

int arr[MAXN];
int numArr;












int main() {

    cin >> numArr;
    for (int i = 1; i <= numArr; ++i) cin >> arr[i];
    int total = 0, cur = 1, pivot = 1, prePivot = 1;;
    for (int i = 2; i <= numArr; ++i) {
        if (arr[i] >= arr[i - 1]) ++cur;
        else {
            if (maximize(total, cur)) pivot = prePivot;
            cur = 1;
            prePivot = i;
        }
    }
    int tmp = pivot + total - 1;
    for (int i = pivot; i <= tmp; ++i) cout << arr[i] << " ";








    return 0;

}






















