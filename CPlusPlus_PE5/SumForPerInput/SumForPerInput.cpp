#include <iostream>
using namespace std;

int main(void){
	int num;
	int sum = 0;
	cout << "Please Enter the Num: ";
	cin >> num;
	while(num != 0){
		getchar();
		sum += num;
		cout << "The Sum of Enter is: " << sum << endl;
		cout << "Please Enter the Num: ";
		cin >> num;
	}
	getchar();
	cout << "You Enter the Num 0 and Quit!" << endl;
	getchar();
	
	return 0;
}