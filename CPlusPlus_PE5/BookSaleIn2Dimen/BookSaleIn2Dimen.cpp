#include <iostream>
using namespace std;

int main(void){
	const int MONTHPERYEAR = 12;
	const int YEAR = 3;
	string months[MONTHPERYEAR] = {
		"January",
		"February",
		"March",
		"April",
		"Mar",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	int saleCondition[MONTHPERYEAR][3] = {0};
	int sales;
	int sum = 0;

	for(int i = 1; i <= YEAR; i ++){
		for(int j = 1; j <= MONTHPERYEAR; j ++){
			cout << "Please Enter the " << i << " Year, " << j << " Month's sale count : ";
			cin	>> saleCondition[j - 1][i - 1];
			sum += saleCondition[j - 1][i - 1];
			getchar();
		}
	}
	

	cout << "The 3 Years's SaleCondition is :\n";
	for(int months = 0; months <= MONTHPERYEAR; months ++){
		if(!months){
			for(int years = 0; years <= YEAR; years ++){
				if(!years){
					cout << "          ";
				}else{
					cout << "  The " << years << " Year  ";
				}
			}
			cout << "\n";
		}else{
			for(int years = 0; years <= YEAR; years ++){
				if(!years){
					if(months < 10){
						cout << months << "   Month  ";	
					}else{
						cout << months << "  Month  ";
					}
				}else{
					cout << "      " << saleCondition[months - 1][years - 1] << "      ";
					if(years % 3 == 0){
						cout << "\n"; 
					}
				}
			}	
		}
		
	}

	cout << "\nThe 3 Years's Sum is : " << sum;
	getchar();
	return 0;
}