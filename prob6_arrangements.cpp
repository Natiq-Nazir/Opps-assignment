        #include <bits/stdc++.h>
        using namespace std;
        int main(){
            cout << "Enter number of guests (n) and number of chairs (k) (n >= k): ";
            long long n,k;
            if(!(cin >> n >> k) || n < 0 || k < 0 || n < k){
                cerr << "Invalid input. Ensure n >= k and non-negative.\n";
                return 1;
            }
            unsigned long long ways = 1;
            for(long long i=0;i<k;++i){
                ways *= (unsigned long long)(n - i);
            }
            cout << "Number of possible arrangements: " << ways << "\n";
            return 0;
        }
