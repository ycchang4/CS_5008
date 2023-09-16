#include <iostream>
using namespace std;

bool isVowel(char value);
char vowels[] = {'a','e', 'i', 'o', 'u'};
char value;

int main() {
    cout << "Enter a character ";
    cin >> value;
    cout << endl;
    bool result = isVowel(value);
    cout<< boolalpha << result << endl;
    return 0;
}

bool isVowel(char value) {
    for(int i = 0; i < sizeof(vowels); i++) {
        if (vowels[i] == value) {
            return true;
        } else {
            return false;
        }
    }
    return false;
}