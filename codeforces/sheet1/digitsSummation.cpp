#include <iostream>
using namespace std;

int main() {
    long long N, M;

    cin >> N >> M;

    int lastDigitN = N % 10;
    int lastDigitM = M % 10;

    int answer = lastDigitN + lastDigitM;

    cout << answer;

    return 0;
}