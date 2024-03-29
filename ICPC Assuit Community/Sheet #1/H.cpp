#include<iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
    double x,y, d;
    cin >> x >> y;
    
    d = x/y;
    
    cout << "floor " << x << " / " << y << " = " << floor(d) << endl;
    cout << "ceil " << x << " / " << y << " = " << ceil(d) << endl;
    cout << "round " << x << " / " << y << " = " << round(d) << endl;
}