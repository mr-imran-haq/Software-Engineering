#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n), result;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    result.push_back(arr[0]);

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1])
            result.push_back(arr[i]);
    }

    for (int x : result)
        cout << x << " ";

    return 0;
}