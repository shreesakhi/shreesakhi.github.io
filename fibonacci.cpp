#include <iostream>
using namespace std;
int main() {
    int limit;
    int first = 0;
    int second = 1;
    int sum = 0;
    cout <<"enter the no till which fibonnaci series to be generated" <<endl;
    cin >> limit;
    cout <<"series is as follows ::" <<endl;
    cout <<first ;
    while (second < limit) {
        sum = first + second;
        cout <<"\t"<<sum ;
        first = second;
        second = sum;
    }
    cout << endl;
    return 0;
}

