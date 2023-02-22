#include <iostream>
using namespace std;

int main() {
    int month, year, days;
    cin >> month >> year;

    switch (month) {
    // January
    case 1:
    // March
    case 3:
    // May
    case 5:
    // July
    case 7:
    // August
    case 8:
    // October
    case 10:
    // December
    case 12:
        days = 31;
        break;
    // April
    case 4:
    // June    
    case 6:
    // September
    case 9:
    // November
    case 11:
        days = 30;
        break;
    // February
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            days = 29;
        }
        else {
            days = 28;
        }
        break;
        return 0;
    }
    
    cout << days;

    return 0;
}
