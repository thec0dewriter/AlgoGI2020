#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "tomb merete: ";
    cin >> n;
    int tomb[n];

    for (int i = 0; i < n; ++i) {
        cin >> tomb[i];
    }

    for (int i = 0; i < n; ++i) {
        int max = i;
        for (int j = 0; j < n; ++j) {
            if(tomb[j] < tomb[max]) {
                max = j;
            }
        }
        int temp = tomb[i];
        tomb[i] = tomb[max];
        tomb[max] = temp;
    }

    for (int i = 0; i < n; ++i) {
        cout << tomb[i] << " ";
    }
}
