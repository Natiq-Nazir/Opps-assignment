        #include <bits/stdc++.h>
        using namespace std;
        int main(){
            cout << "Enter employee records: ID(int) wage(double) hours(double). Enter ID 0 to finish.\n";
            const double TAX_RATE = 0.03625;
            long long id;
            double wage, hours;
            double total_payroll = 0;
            int count = 0;
            cout << fixed << setprecision(2);
            while(true){
                cout << "ID: ";
                if(!(cin >> id)) break;
                if(id == 0) break;
                cout << "Wage: ";
                if(!(cin >> wage)) break;
                cout << "Hours: ";
                if(!(cin >> hours)) break;
                double gross;
                if(hours > 40.0){
                    gross = 40.0 * wage + (hours - 40.0) * wage * 1.5;
                } else {
                    gross = hours * wage;
                }
                double net = gross * (1.0 - TAX_RATE);
                cout << "Employee " << id << " net pay: " << net << "\n";
                total_payroll += net;
                ++count;
            }
            if(count > 0){
                cout << "\nTotal payroll: " << total_payroll << "\n";
                cout << "Average paid : " << (total_payroll / count) << "\n";
            } else {
                cout << "No employees processed.\n";
            }
            return 0;
        }
