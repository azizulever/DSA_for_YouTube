#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, check, count = 0;
    cin >> n >> check;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if(arr[i] == check) {
            cout << "Index Number is: " << i;
            count++;
            return 0;
        }
    }

    if(count == 0) {
        cout << "Number Not Found!!";
    }

    return 0;
}
