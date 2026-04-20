#include <iostream>
using namespace std;

int main() {
    int firstTemp, secondTemp, thirdTemp;
    int difference;

    // Input first temperature
    cout << "Enter the first temperature reading: ";
    cin >> firstTemp;

    // Input second temperature
    cout << "Enter the second temperature reading: ";
    cin >> secondTemp;

    // Calculate difference
    difference = secondTemp - firstTemp;

    // Check temperature increase conditions
    if (difference > 50) {
        cout << "Reduce fryer heat before taking the third reading" << endl;
    } 
    else if (difference < 10) {
        cout << "Increase the fryer heat before taking the third reading" << endl;
    }

    // Input third temperature
    cout << "Enter the third temperature reading: ";
    cin >> thirdTemp;

   
