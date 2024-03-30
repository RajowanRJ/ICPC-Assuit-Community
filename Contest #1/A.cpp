// Starting with the name of Almighty Allah

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a , b;
    cin >> a >> b;
    float x = 100 - a;
    float c = b * 100 / x;

    cout << fixed << setprecision (2) << (c);
}