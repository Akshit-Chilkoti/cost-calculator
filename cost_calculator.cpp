#include <iostream>
#include <string>
#include <windows.h>
#include "cost_calculator.h"
using namespace std;

int main() {
	system("color a");
	string name;
	int quantity;
	cout << "Product Name: ";
	cin >> name;
	cout << "Quantity: ";
	cin >> quantity;
	
	if (name == "Mouse"){
	calculator(quantity, 20);
	} else if (name == "Keyboard") {
		calculator(quantity, 22);
	} else if(name == "Monitor") {
		calculator (quantity, 250);
	} else {
		cout << "No Such Product!";
	}
	return 0;
}
