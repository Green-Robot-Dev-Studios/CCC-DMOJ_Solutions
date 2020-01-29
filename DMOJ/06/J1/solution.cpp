#include <iostream>
#include <string>
#include <vector>
#include <string>
using namespace std;

int burger, side, drink, dessert;
int cal;
int main(){
	cin >> burger;
	switch (burger){
		case 1 : cal += 461;
				break;
		case 2 : cal += 431;
				break;
		case 3 : cal += 420;
				break;
	}
	cin >> side;
	switch (side){
		case 1 : cal += 100;
				break;
		case 2 : cal += 57;
				break;
		case 3 : cal += 70;
				break;
	}
	cin >> drink;
	switch (drink){
		case 1 : cal += 130;
				break;
		case 2 : cal += 160;
				break;
		case 3 : cal += 118;
				break;
	}
	cin >> dessert;
	switch (dessert){
		case 1 : cal += 167;
				break;
		case 2 : cal += 266;
				break;
		case 3 : cal += 75;
				break;
	}
	cout << "Your total Calorie count is " << cal << ".";
	int _;
	cin >> _;
}
