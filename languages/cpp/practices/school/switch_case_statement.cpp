#include <iostream>

using namespace std;

int main() { 
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) { 
        int n;
        cin >> n;
        switch (n) {
            case 1:
                cout << "one\n";
                break;
            case 2:
                cout << "two\n";
                break;
            case 3:
                cout << "three\n";
                break;
            case 4:
                cout << "four\n";
                break;
            case 5:
                cout << "five\n";
                break;
            case 6:
                cout << "six\n";
                break;
            case 7:
                cout << "seven\n";
                break;
            case 8:
                cout << "eight\n";
                break;
            case 9:
                cout << "nine\n";
                break;
            case 10:
                cout << "ten\n";
                break;
            default:
                cout << "not in range\n";
        }
    }
}