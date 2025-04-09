#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "This program calculates the average of three numbers." << endl;

    cout << "First number: ";
    cin >> num1;

    cout << "Second number: ";
    cin >> num2;

    cout << "Third number: ";
    cin >> num3;

    double average = (num1 + num2 + num3) / 3.0;

    cout << "The average is " << average << endl;

    return 0;
}
