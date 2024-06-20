#include <iostream>
using namespace std;

void createSequence(int size) {
    for (int i = 1; i <= size; i++) {
        cout << i << (i == size ? "\n" : " ");
    }

    int shift = size / 2;
    if (size % 2 != 0) {
        cout << size << " ";
        for (int i = 2; i < size; i++) {
            if (i + shift > size - 1) {
                cout << i - shift << " ";
            } else {
                cout << i + shift << " ";
            }
        }
    } else {
        for (int i = 1; i < size; i++) {
            if (i + shift > size) {
                cout << i - shift << " ";
            } else {
                cout << i + shift << " ";
            }
        }
    }
    if (size != 1) {
        cout << size - shift << endl;
    } else {
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        createSequence(n);
    }
    return 0;
}
