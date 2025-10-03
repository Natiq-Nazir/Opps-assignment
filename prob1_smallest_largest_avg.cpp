        #include <bits/stdc++.h>
        using namespace std;
        int main(){
            cout << "Enter N (number of values): ";
            int N;
            if(!(cin >> N) || N <= 0){
                cerr << "Invalid N\n";
                return 1;
            }
            double x;
            double sum = 0;
            double mn = numeric_limits<double>::infinity();
            double mx = -numeric_limits<double>::infinity();
            cout << "Enter " << N << " numbers (space or newline separated):\n";
            for(int i=0;i<N;++i){
                if(!(cin >> x)){
                    cerr << "Not enough numbers provided\n";
                    return 1;
                }
                sum += x;
                mn = min(mn, x);
                mx = max(mx, x);
            }
            cout << "Smallest: " << mn << "\n";
            cout << "Largest : " << mx << "\n";
            cout << "Average : " << (sum / N) << "\n";
            return 0;
        }
