#include <iostream>
int main() {
	int lbkg;
	double lbs1;
	double kg1;
	double lbs2;
	double kg2;
	std::cout << "Would you like to convert from Pounds to Kilograms, or from Kilograms to Pounds? [1,2]\n";
	std::cin >> lbkg;
	
		if (lbkg == 1) {
			std::cout << "What is the weight in Pounds?\n";
			std::cin >> lbs1;
			kg1 = (lbs1 * 0.45);
				std::cout << lbs1 << " Pounds = " << kg1 << " KG\n";
		}
		else if (lbkg == 2) {
			std::cout << "What is the weight in KG?\n";
			std::cin >> kg2;
			lbs2 = (kg2 * 2.2);
				std::cout << kg2 << " KG = " << lbs2 << " Lbs\n";
		}
		else {
			std::cout << "Invalid Input.\n";
		}
}
