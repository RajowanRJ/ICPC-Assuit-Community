#include <iostream>
using namespace std;

int main () {
    int day;
    cin >> day;

    int years = day / 365;
    int temp1 = day % 365;
    int months = temp1 / 30;
    int days = temp1 % 30;

    cout << years << " years" << endl; 
    cout << months << " months" << endl; 
    cout << days << " days" << endl; 
}