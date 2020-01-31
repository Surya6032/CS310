/*

       CSS 310
       Spring Semester, 2019

       Project 1:C++ program to perform number base conversion, specifically with Base 2 and Base 10.
                 And performs following:-
                 	-	Receive user input in Base 10
					-	Receive user input in Base 2 (receive only 1's and 0's)
					-	Output the user input in Base 10 along with the conversion to Base 2
					-	Output the user input in Base 2 along with the conversion to Base 10
					-	Continue this process while the user input in Base 10 is non-negative

							


       Programmed by: Surya Partap Singh
       Due: Thursday,January 30, 2020

*/
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

const int BINARY=11132;
const int TWO=2;
const int TEN=10;


//**********************************************************************************************************
//Function: decimalToBinary(int Decimalnumber) 
//Purpose:  This function converts decimal to binary
//Incoming: int Decimalnumber
//Outgoing: Converted binary number
//Return:   None
//********************************************************************************************************
void decimalToBinary(int Decimalnumber) 
{ 
    
    int binaryNum[BINARY]; 
    int i = 0; 
    while (Decimalnumber > 0) {  
        binaryNum[i] = Decimalnumber % TWO; 
        Decimalnumber = Decimalnumber / TWO; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 

//**********************************************************************************************************
//Function: binaryToDecimal(int BinaryNumber) 
//Purpose:  This function converts binary to decimal
//Incoming: int BinaryNumber
//Outgoing: None
//Return:   decimal_value
//********************************************************************************************************
int binaryToDecimal(int BinaryNumber) 
{ 
    int binary = BinaryNumber; 
    int decimal_value = 0; 
    int base = 1; 
  
    int temp = binary; 
    while (temp) { 
        int last_digit = temp % TEN; 
        temp = temp / TEN; 
  
        decimal_value += last_digit * base; 
  
        base = base * TWO; 
    } 
  
    return decimal_value; 
} 
//**********************************************************************************************************
//Function: BaseTwo
//Purpose:  This function only takes input as 1's and 0's
//Incoming: None
//Outgoing: None
//Return:   String_to_Int
//********************************************************************************************************
int BaseTwo()
{ 
   string number;
   bool value=true;
   cout<<"Enter binary number(1's and 0's only'):"<<endl;
   cin>>number;
   for (int i=0;i<number.length();i++) 
  
        {
		if(number[i]== '0'||number[i]=='1') 
           { 
		     value=false;
		 
		 }
		 if(value)
		{   cout<<"Error occured"<<endl;
			cout<<"Enter binary number(1's and 0's only'):"<<endl;
	        cin>>number;
		  }	 
		
	}

int String_to_Int=stoi(number);
return String_to_Int;
	}
 
//Main driver function   
int main()
{

   int DecimalNumber=0; 
   do{
   cout<<"Enter decimal number(Positive decimal number only):"<<endl;
   cin>>DecimalNumber;
    }while(DecimalNumber <0);
   
   cout<<"Number in binary:";
   decimalToBinary(DecimalNumber);
   cout<<endl;
   cout<<"Decimal Number:"<<DecimalNumber<<endl;
   cout<<endl;
   cout<<"******************************************************************"<<endl;  
   int BinaryNumber = BaseTwo(); 
   cout <<"Number in Decimal:"<< binaryToDecimal(BinaryNumber) << endl;
   cout<<"Number in Binary:"<<BinaryNumber<<endl;
   cout<<"******************************************************************"<<endl;
   return 0; 
   




}
