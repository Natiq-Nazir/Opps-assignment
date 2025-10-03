        #include <bits/stdc++.h>
        using namespace std;
        int main(){
            cout << "Enter daily high temperatures (space/newline separated). End input with EOF (Ctrl+D / Ctrl+Z):\n";
            double t;
            int hot=0, pleasant=0, cold=0;
            long double sum = 0;
            long long count = 0;
            while(cin >> t){
                ++count;
                sum += t;
                string cat;
                if(t >= 85) { cat = "hot"; ++hot; }
                else if(t >= 60) { cat = "pleasant"; ++pleasant; }
                else { cat = "cold"; ++cold; }
                cout << t << " -> " << cat << "\n";
            }
            if(count == 0){
                cout << "No temperatures provided.\n";
                return 0;
            }
            cout << "\nSummary:\n";
            cout << "Total readings: " << count << "\n";
            cout << "Hot days     (>=85): " << hot << "\n";
            cout << "Pleasant days(60-84): " << pleasant << "\n";
            cout << "Cold days    (<60): " << cold << "\n";
            cout << "Average temperature: " << (double)(sum / count) << "\n";
            return 0;
        }
