#include <iostream>
using namespace std;
int main() {
    int num;
    int sum = 0;
    int rem;
    cout << "enter the number";
    cin >> num;
    while (num > 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    cout <<"sum of the digits :" << sum << endl;
    return 0;
}

