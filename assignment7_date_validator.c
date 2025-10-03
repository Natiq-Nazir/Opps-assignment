#include <stdio.h>

int is_leap(int y) {
    if (y%400==0) return 1;
    if (y%100==0) return 0;
    if (y%4==0) return 1;
    return 0;
}

int days_in_month(int m, int y) {
    if (m==1||m==3||m==5||m==7||m==8||m==10||m==12) return 31;
    if (m==4||m==6||m==9||m==11) return 30;
    if (m==2) return is_leap(y) ? 29 : 28;
    return 0;
}


int day_of_week(int d,int m,int y) {
    if (m < 3) { m += 12; y -= 1; }
    int K = y % 100;
    int J = y / 100;
    int h = (d + (13*(m+1))/5 + K + K/4 + J/4 + 5*J) % 7;
   
    int dow = ((h + 5) % 7) + 1; 
    return dow;
}

int main() {
    int d,m,y;
    printf("Enter date (DD MM YYYY): ");
    if (scanf("%d %d %d", &d, &m, &y)!=3) return 0;
    if (y < 1 || m < 1 || m > 12) { printf("Invalid date\n"); return 0; }
    int dim = days_in_month(m,y);
    if (d < 1 || d > dim) { printf("Invalid date\n"); return 0; }
    int dow = day_of_week(d,m,y);
    const char* names[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    printf("Valid date. Day of week: %s\n", names[dow-1]);
    return 0;
}
