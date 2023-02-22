/*
#include <iostream>
using namespace std;


int main() {
	int number, digits, tens, hundreds;
	cin >> number;
	digits = number % 10;
	tens = (number / 10) % 10;
	hundreds = number / 100;

	switch (hundreds) {
	case 1:
		cout << "One hundred ";
		break;
	case 2:
		cout << "Two hundred ";
		break;
	case 3:
		cout << "Three hundred ";
		break;
	case 4:
		cout << "Four hundred ";
		break;
	case 5:
		cout << "Five hundred ";
		break;
	case 6:
		cout << "Six hundred ";
		break;
	case 7:
		cout << "Seven hundred ";
	case 8:
		cout << "Eight hundred ";
		break;
	case 9:
		cout << "Nine hundred ";
		break;
	}
	
	switch (tens) {
	case 1:
		switch (digits) {
		case 0:
			cout << "ten ";
			break;
		case 1:
			cout << "eleven ";
			break;	
		case 2:
			cout << "twelve ";
			break;
		case 3:
			cout << "thirteen ";
			break;
		case 4:
			cout << "fourteen ";
			break;
		case 5:
			cout << "fifteen ";
			break;
		case 6:
			cout << "sixteen ";
			break;
		case 7:
			cout << "seventeen ";
			break;
		case 8:
			cout << "eighteen ";
			break;
		case 9:
			cout << "nineteen ";
			break;
		}
		break;
	case 2:
		cout << "twenty ";
		break;
	case 3:
		cout << "thirty ";
		break;
	case 4:
		cout << "fourty ";
		break;
	case 5:
		cout << "fifty ";
		break;
	case 6:
		cout << "sixty ";
		break;
	case 7:
		cout << "seventy ";
		break;
	case 8:
		cout << "eighty ";
		break;
	case 9:
		cout << "ninety ";
		break;
	}

	if (tens != 1)
		switch (digits) {
		case 1:
			cout << "one";
			break;
		case 2:
			cout << "two";
			break;
		case 3:
			cout << "three";
			break;
		case 4:
			cout << "four";
			break;
		case 5:
			cout << "five";
			break;
		case 6:
			cout << "six";
			break;
		case 7:
			cout << "seven";
			break;
		case 8:
			cout << "eight";
			break;
		case 9:
			cout << "nine";
			break;
		}
}
*/