#include <iostream>
int main() {
	//Var Declararions
	int ctf;
	int br;
	double c1;
	double c2;
	double f1;
	double f2;
	//end var dec.
	while (br<99999) {
		std::cout << "Would you like to convert celcius to fahrenheit, or fahrenheit to celcius?[1,2]\n";
	std::cin >> ctf;
	if (ctf == 1) {
		std::cout << "What is the temperature in celcius?\n";
		std::cin >> c1;
		f1 = (c1 * 1.8) + 32;
		std::cout << "It is " << f1 << " degrees Fahrenheit.\n";
		break;
	}
	else if (ctf == 2) {
		std::cout << "What is the temperature in Fahrenheit\n";
		std::cin >> f2;
		c2 = (f2 - 32)/ 1.8;
		std::cout << "It is " << c2 << " degrees Celcius.\n";
		break;
	}
	else {
		std::cout << "Invalid argument.\n";
		break;
	}
	}
}
