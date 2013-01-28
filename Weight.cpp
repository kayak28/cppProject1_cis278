#include <iostream>

using namespace std;



int main()
{
	int feet, inches, weight;
	int execution; 

	cout << "how many times do you want to calculate Ideal Body Weight??";
	cin >> execution;
	
	for(int counter = 0; counter < execution; counter++) 
	{

		cout << "type your feet of your hight ";
		cin >> feet;
		cout << "type your inches of your hight ";
		cin >> inches;


		switch(feet)
		{
			case 1:
			case 2:
			case 3:
			case 4: 
				cout << "\nyour feet must be bigger than 5feet\n";
				break;

			case 5:
				if(inches <= 12 &&  inches >= 0)
				{
					weight = 110 + 5 * inches;
					cout << "your ideal wight is:"
					     << weight 
					     << "pound\n"; 
	
				}
				else
				{
					cout << "out of domain in inches\n"
				     	<< "try again\n";
			
				}		
				break;	
			case 6:
			case 7:
			case 8:
			case 9:	
				if(inches <= 12 && inches >=  0)
				{
					weight = (feet - 5 )* 60 + inches * 5 + 110;
					cout << "your ideal wight is: " 
					     << weight 
					     << "pounds\n";
				}
				else 
				{
					cout << "out of domain in inches\n"
					     << "try again\n";
				}
				break;
			default:
				cout << "Sorry, your hight is too big to calculate";
			
 

		}//switch
	}//fot
	return 0;

}//main
