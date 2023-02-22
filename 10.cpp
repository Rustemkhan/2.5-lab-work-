#include <iostream>
using namespace std;
int main() {
	
	int D, M;
	cin >> D >> M;
    int days;

    switch (M) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 4:    
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    case 2:
        days = 28;
        break;
    }

    // previous day
    int previous_day = D - 1;
    int previous_month = M;

    if (previous_day == 0) {
        previous_month--;
        if (previous_month == 0) {
            previous_month = 12;
        }
        switch (previous_month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            previous_day = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            previous_day = 30;
            break;
        case 2:
            previous_day = 28;
            break;
        }
    }
    cout << previous_day << endl;
    cout << previous_month << endl;

    // next day
    int next_day = D + 1;
    int next_month = M;
    if (next_day > days) {
        next_day = 1;
        next_month++;
        if (next_month > 12) {
            next_month = 1;
        }
    }
    cout << next_day << endl;
    cout << next_month;
    return 0;
}