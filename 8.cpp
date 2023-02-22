#include <iostream>
#include <string>

using namespace std;
int main() {
	int year = 1984;
	string color, animal;
	cin >> year;

	switch ((year - 1984) % 60 / 12) {
	case 0:
		color = "green";
		break;
	case 1:
		color = "red";
		break;
	case 2:
		color = "yellow";
		break;
	case 3:
		color = "white";
		break;
	case 4:
		color = "black";
		break;
	}
	
	switch ((year - 1984) % 12) {
	case 0:
		animal = "rat";
		break;
	case 1:
		animal = "cow";
		break;
	case 2:
		animal = "tiger";
		break;
	case 3:
		animal = "bunny";
		break;
	case 4:
		animal = "dragon";
		break;
	case 5:
		animal = "snake";
		break;
	case 6:
		animal = "horse";
		break;
	case 7:
		animal = "sheep";
		break;
	case 8:
		animal = "monkey";
		break;
	case 9:
		animal = "chicken";
		break;
	case 10:
		animal = "dog";
		break;
	case 11:
		animal = "pig";
		break;
	}
	cout << "Year of the " << color << " " << animal;
	return 0;
}
