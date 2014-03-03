#include <iostream>

using namespace std;

int main(void){
	const int MONTHSPERYEAR = 12;
	int sum = 0;
	int sales;

	for(int i = 1; i <= MONTHSPERYEAR; i ++){
		cout << "Please Enter the " << i << " month's sales: ";
		cin >> sales;
		getchar();
		sum += sales;
	}
	cout << "The sales of this year is: " << sum;
	getchar();
	return 0;
}