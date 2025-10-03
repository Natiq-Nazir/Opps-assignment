#include <iostream>
using namespace std;
int main() {
    int marks[5];
    int total = 0;
    cout << "Enter marks of 5 subjects: ";
    for(int i=0;i<5;i++) {
        cin >> marks[i];
        total += marks[i];
    }
    double percentage = total / 5.0;
    cout << "Percentage: " << percentage << "%\n";
    if(percentage >= 90) cout << "Grade A (Distinction)\n";
    else if(percentage >= 75) cout << "Grade B (First Division)\n";
    else if(percentage >= 60) cout << "Grade C (Second Division)\n";
    else if(percentage >= 40) cout << "Grade D (Pass)\n";
    else cout << "Fail\n";
    return 0;
}