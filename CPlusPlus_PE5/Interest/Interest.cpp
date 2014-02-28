#include <iostream>
using namespace std;

int main(void){
	const int PRINCIPAL = 100;
	const float SINGLERATE = 0.1;
	const float MULTIRATE = 0.05;
	double singleFund = 0.0;
	double multiFund = 0.0;
	int year = 1;
	do{
		singleFund += PRINCIPAL * SINGLERATE;
		multiFund += (PRINCIPAL + multiFund) * MULTIRATE;
		year ++;
	}while(multiFund <= singleFund);
	cout << "The Year is : " << year << endl;
	getchar();
	return 0;
}