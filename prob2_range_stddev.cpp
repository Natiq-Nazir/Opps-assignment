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
            long double sum_sq = 0;
            double mn = numeric_limits<double>::infinity();
            double mx = -numeric_limits<double>::infinity();
            cout << "Enter " << N << " numbers:\n";
            for(int i=0;i<N;++i){
                if(!(cin >> x)){
                    cerr << "Not enough numbers provided\n";
                    return 1;
                }
                sum += x;
                sum_sq += (long double)x * (long double)x;
                mn = min(mn, x);
                mx = max(mx, x);
            }
            double average = sum / N;
            double range = mx - mn;
            long double variance = (sum_sq - (long double)sum * (long double)sum / N) / N;
            if(variance < 0 && variance > -1e-15) variance = 0; // numeric safety
            double stddev = sqrt((double)variance);
            cout << "Smallest: " << mn << "\n";
            cout << "Largest:  " << mx << "\n";
            cout << "Range:    " << range << "\n";
            cout << "Average:  " << average << "\n";
            cout << "StdDev:   " << stddev << "\n";
            return 0;
        }
