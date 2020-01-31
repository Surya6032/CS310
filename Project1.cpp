#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

const int BINARY=32;
const int TWO=2;
const int TEN=10;



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
int Base2()
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
   int BinaryNumber = Base2(); 
   cout <<"Number in Decimal:"<< binaryToDecimal(BinaryNumber) << endl;
   cout<<"Number in Binary:"<<BinaryNumber<<endl;
   cout<<"******************************************************************"<<endl;
   return 0; 
   




}
