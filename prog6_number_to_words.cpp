#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number (0-99): ";
    cin >> num;
    string ones[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    string tens[] = {"","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

    if(num < 10) cout << ones[num] << "\n";
    else if(num < 100) {
        cout << tens[num/10];
        if(num%10 != 0) cout << " " << ones[num%10];
        cout << "\n";
    } else cout << "Out of range\n";
    return 0;
}