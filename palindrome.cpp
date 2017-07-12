#include <iostream>
using namespace std;
int main() {
    int num, rem, rev = 0, original;
    cout <<"enter any number" << endl;
    cin >> num;
    original = num;
    while (num > 0) {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
    }
    cout <<"reverse is " << rev << endl;
    if (rev == original) {
        cout << "Its a palindrome !!" <<endl;
    } else {
        cout <<"Not a palindrome" <<endl;
    }
    return 0;
}

