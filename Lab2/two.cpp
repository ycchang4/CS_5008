#include <iostream>
using namespace std;

//function declaration
int reverseDigit(int val);

int main() {
    int val;
    cout << "Enter an integer: ";
    cin >> val;
    cout << val << " with the digits reversed = " << reverseDigit(val) << endl;

    return 0;
}

//function to reverse the digits
int reverseDigit(int val) {
    int reverseNum = 0;
    bool isNegative = false;
    if(val < 0) {
        isNegative = true;
    }
    while (val != 0) {
        reverseNum = reverseNum * 10 + val % 10;
        val = val / 10;
    }

    if(isNegative) {
        reverseNum = -reverseNum;
    }

    return reverseNum;
}