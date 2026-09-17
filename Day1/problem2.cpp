#include <iostream>
#include <string>
using namespace std;

int main() {
    string dept;
    char ch;

    cout << "Enter Department Name: ";
    getline(cin, dept);

    int count = 0;

    for (char ch : dept) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count += 1;
        }
    }
    cout << "Total Vowel: " << count << endl;

    return 0;
}