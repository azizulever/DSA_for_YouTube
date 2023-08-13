#include <bits/stdc++.h>
#define nl endl
using namespace std;

int main() {
    int n, check;
    cin >> n >> check;

    int mid, left = 0, right = n-1;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while(left <= right) {
        mid = (left + right) /2;

        if(arr[mid] == check) {
            cout << mid << nl;
            return 0;
        }

        else if(arr[mid] < check)
            left = mid + 1;
        
        else
            right = mid - 1;

    }

    return 0;
}
