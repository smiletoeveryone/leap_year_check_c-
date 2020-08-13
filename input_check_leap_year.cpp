#include <iostream>
using namespace std;
int main(){
int year;
std::cout << "please input the year for checking" << std::endl;
std::cin >> year;
	if(year% 4 == 0 && year % 100 == 0){
		std::cout << "it is a leap year "<< std::endl;}
	else {	
		std::cout << "this is not a leap year" << std::endl;}

	return 0;}
	





