#include <iostream>
#include "math.h"


using namespace std;

int main()
{
	int cardNum;
	int digit[8];
	cout << "Entry your 8 digit card number";
	cin >> cardNum;

	for(int counter = 7; counter > 0; counter--)
	{
		digit[counter] = cardNum/pow(10,counter)%10;
		cout << digit[counter];

	}
	
	int i = 0;
	int oddSum = 0;
	int evenSum = 0;
	int count = 0;
	while(i <= 7)
	{
		i = 2*i +1;
		cout << digit[i];
		oddSum += digit[i];
		cout << oddSum;

	}	

	while(count <= 8)
	{
		count = 2*count;
		evenSum =2 * digit[count];
		cout << evenSum;
	}

	int sum;
	sum = oddSum + evenSum;

	if(sum % 10 == 0)
	{
		cout << "this card is varified";
	}	
	else
	{
		cout << "this card is not varified";
	}
	
}//main
