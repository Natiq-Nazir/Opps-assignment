#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter 3 sides: ";
    cin >> a >> b >> c;
    if(a + b > c && a + c > b && b + c > a) {
        cout << "Valid Triangle\n";
        if(a == b && b == c) cout << "Equilateral\n";
        else if(a == b || b == c || a == c) cout << "Isosceles\n";
        else cout << "Scalene\n";
        if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            cout << "Right-angled Triangle\n";
    } else {
        cout << "Not a valid triangle\n";
    }
    return 0;
}