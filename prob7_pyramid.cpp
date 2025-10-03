        #include <bits/stdc++.h>
        using namespace std;
        int main(){
            const int LINES = 20;
            for(int i=1;i<=LINES;++i){
                int xs = 2*i - 1;
                int spaces = LINES - i;
                for(int s=0;s<spaces; ++s) cout << ' ';
                for(int j=0;j<xs; ++j) cout << 'X';
                cout << '\n';
            }
            return 0;
        }
