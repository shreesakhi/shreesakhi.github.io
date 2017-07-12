#include <iostream>
using namespace std;
int main() {
    int num, fact = 1, original;
    cout <<"enter a number"<< endl;
    cin >> num;
    original = num;
    while (num > 0) {
        fact *= num;
        num --;
    }
    cout <<"factorial of " <<original <<" is " << fact <<endl;
    return 0;
}

