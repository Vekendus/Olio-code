#include <iostream>
#include <stdexcept>

using namespace std;

int calcSum(int a, int b) {
    return a + b;
}

int calcDiv(int a, int b) {
    return a / b;
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return (float)a / b;
}

int main() {
    int a, b;

    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    cout << "The sum is: " << calcSum(a, b) << endl;
    cout << "The division is: " << calcDiv(a, b) << endl;

    cout << "retSum: " << retSum(a, b) << endl;

    try {
        cout << "retDiv: " << retDiv(a, b) << endl;
    }
    catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}