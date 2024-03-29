#include<iostream>
#include<iomanip>
using namespace std;
 
int main()
{
    double pi = 3.141592653;
    double R;
    cin >> R;
    
    double Area = pi * R * R;
    
    cout << fixed << setprecision(9) << Area << endl;;
    
    
}