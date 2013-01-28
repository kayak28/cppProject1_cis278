#include <iostream>
#include "math.h"
using namespace std;

int main()
{
	int cardNum = 0;//to store user input
	int digit[8]; // to each digit
	int evenSum = 0;//to store sum of even index elements 
	int twice = 0;//to store doubled value
	int onePlaceSum = 0;//sum of one place numbers
	int tenPlaceSum =0;//sum of ten place numbers
	int finalResult = 0;//to store addition
	int index = 0;// walking though array by loops


	cout << "Enter your 8 digit card number";
	cin >> cardNum;
	for(index = 7; index >= 0; --index)
	{
		digit[index] = (int)(cardNum/pow(10, index))%10;
		cout << "digit[" << index <<"] =" << digit[index] <<"\n" ;
	}//for	
	/*
	*Starting from the rightmost digit, form the sum of every other
	*digit. == calulate the sum of even index
	*/
	index = 0;
	for(index = 0, index < 7; i+= 2)
	{
		evenSum += digit[index];
		cout << "evenSum ="<< evenSum <<"\n" ;
	}//for
	
	/*
	*Double each of the digits that were not included in the preceding 
	*step. Add all digit of resulting numbers == double and add each
	*odd index elements of digit array
	*/
	index = 1;
	for(index = 1; index <= 7; index += 2)
	{
		twice = (int)(2*digit[index]);
		tenPlaceSum = (int)twice/10;
		onePlaceSum = (int)twice%10;
		twiceSum += tenPlaceSum + onePlanceSum;
	}
	/*
	*Determine whether the credit card is valid or not
	*/
	int finalResult = twiceSum + evenSum;
	if(finalResult % 10 == 0)
	{
		cout << "this credit card number is valied :" << cardNum; 
	}
	else 
	{
		cout << "this credit card in invalid :" << cardNum; 
	}
	return 0;
}//main
