#include <iostream>
using namespace std;

int main(void){
	int num1, num2;
	int sum = 0;
	
	cout << "Please Enter the Smaller INT Num : " << endl;
	cin >> num1;
	getchar();
	cout << "Please Enter the Bigger INT Num : " << endl;
	cin >> num2;
	getchar();
	for(int i = 0; i <= (num2 - num1); i ++){
		sum += (num1 + i); 
	}
	cout << sum;
	getchar();
	return 0;
}