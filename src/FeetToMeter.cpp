#include <iostream>

int main() {
//This program will convert feet, inches, and miles to meters, centimeters, and kilometers.
	int im;
	int ifm;
	int mti;
	double cm1;
	double in1;
	double ft1;
	double mile1;
	double m1;
	double km1;
	int cmk;
	std::cout << "Are you converting Imperial to Metric or Metric to Imperial?[1,2]\n";
	std::cin >> im;
	//Code for Imperial to Metric.
	
	if (im == 1) {
		std::cout << "Are you coverting inches, feet, or miles?[1,2,3]\n";
	std::cin >> ifm;
	//In >> Cm
	if (ifm == 1) {
		std::cout << "Amount of inches: \n";
		std::cin >> in1; 
		cm1 = (in1 * 2.54); 
			std::cout << in1 << " Inches are equal to " << cm1 << " Cm.\n";
	}
	//Ft >> m
	else if (ifm == 2) {
		std::cout << "Amount of feet: \n";
	std::cin >> ft1;
	m1 = (ft1 * 0.3);
	std::cout << ft1 << " Feet = " << m1 << " Meters.\n";
	}
	//Miles >> Km
	else if (ifm == 3) {
		std::cout << "Amount of miles: \n";
	std::cin >> mile1;
	km1 = (mile1 * 1.609); 
	std::cout << mile1 << " miles = " << km1 << " Km.\n";
	}
	else
		std::cout << "invalid input\n";
	}
//Metric to Imperial
	else if (im == 2) {
		std::cout << "Are you converting Centimeters, meters, or Kilometers?[1,2,3]\n";
		std::cin >> cmk;
		if (cmk == 1) {
			std::cout << "Amount of cm: \n";
			std::cin >> cm1;
			in1 = (cm1 / 2.54);
			std::cout << cm1 << " cm = " << in1 << " in.\n";
		}
		else if (cmk == 2) {
			std::cout << "Amount of meters: \n";
			std::cin >> m1;
			ft1 = (m1 / 0.3);
			std::cout << m1 << " meters = " << ft1 << " ft.\n";
		}
		else if (cmk == 3) {
			std::cout << "Amount of miles: \n";
			std::cin >> km1;
			mile1 = (km1 * 0.62);
			std::cout << km1 << " Kilometers = " << mile1 << " Km.\n";
		}
		else
			std::cout << "Invalid Input.\n";

}
}

