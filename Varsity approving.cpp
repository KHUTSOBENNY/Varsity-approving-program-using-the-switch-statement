// Varsity approving.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <cmath>
int main() {

	int Mark, Salary;
	char Grade;

	
	cout << " Enter your marks " << endl;
	cin >> Mark;
	

	if (Mark >= 90) {
		Grade = 'A';
		
		
	}
	else if (Mark >= 75 && Mark < 89) {
		Grade = 'B';

	}
	
	if (Mark >= 60 && Mark < 75) {
		Grade = 'C';

	}
	else if (Mark < 60) {
		Grade = 'D';

	}





	switch (Grade) {
	case 'A':
			cout << " You can go to any University of your choice and you will get a car ";
		break;

	
			

	}

	return 0;

	}







// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
