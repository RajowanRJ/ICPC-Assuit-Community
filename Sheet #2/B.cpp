// Starting in the name of Almighty Allah

#include <iostream>
using namespace std;
 
int main() {
    int i = 1, n;
    cin >> n;
    while (i <= n) {
        if (n == 1)
        cout << "-1" << endl;
        if (i % 2 == 0)
        cout << i << endl;
        i++;
    }
}