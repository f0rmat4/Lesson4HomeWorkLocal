#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;






int main(int argc, const char* argv[]) {
	
	
	/*double Task1();
	double a, b;
	double sum = a + b;
	cout << "Enter number" << endl;
	cin >> a >> b;


	if ((sum >= 10) && (sum <= 20)) {
		cout << true << endl;
	}*/


	/*bool Task2();
	cout << "Enter number" << endl;
	int n;
	int x = 2;
		cin >> n;
	while (x / x <= n) {
		if (n % x == 0){
			cout << "Natural number" << endl;
				break;
	}
		cout << "NOT Natural number" << endl;
		break;
	}
	*/
	
	
	
	//Написать программу, выводящую на экран “истину”, если две целочисленные константы, объявленные в её начале либо равны десяти сами по себе, либо их сумма равна десяти.
	
	int num1;
	int num2;
	cin >> num1 >> num2;
	int sum = num1 + num2;
	
			do {
			if (num1 == 10) {
				cout << true << endl;
				break;
			}else
					continue;
			if (num2 == 10) {
				cout << true << endl;
				break;
			}else
					continue;
			if (sum == 10) {
				cout << true << endl;
				break;
			}else
				cout << false << endl;
				break;
			} while (false);
			
			
			
				
}