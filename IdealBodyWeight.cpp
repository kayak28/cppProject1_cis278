#include <iostream>

using namespace std;

int main()
{
	int feet = 0; 
	int inches = 0;//user height
	int weight = 0;//idealBody weight




	cout << "enter your height in feet \n";
	cin >> feet;
	cout << "enter your height in inches\n";
	cin >> inches;
	cout << "hight:"<< feet<<"ft and"<< inches <<" inches\n";
 	
	switch(feet)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			cout << "your height may be higher than 5ft\n ";
			break;
		case 5:
			if(inches >= 0 || inches << 12)
			{
				weight = inches * 5 + 110;		
			}//if
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			if(inches >= 0 && inches < 12)
			{
				weight = (feet - 5)*60 + inches * 5 + 110;
			}//if
			break;
		default: 
			cout << "invalid, your feet is less than 9ft.Sorry";

	}//switch
	cout << "Ideal body weight :" << weight << "pounds\n";
	

}//main
