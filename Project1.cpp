#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;





void decimalToBinary(int n) 
{ 
    
    int binaryNum[32]; 
    int i = 0; 
    while (n > 0) {  
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 
int binaryToDecimal(int n) 
{ 
    int num = n; 
    int dec_value = 0; 
    int base = 1; 
  
    int temp = num; 
    while (temp) { 
        int last_digit = temp % 10; 
        temp = temp / 10; 
  
        dec_value += last_digit * base; 
  
        base = base * 2; 
    } 
  
    return dec_value; 
} 
int Base2()
{ 
   string number;
   int k=0;
   bool value=true;
   cout<<"Enter value:"<<endl;
   cin>>number;
  for (int i=0;i<number.length();i++) 
  
        {
		if(number[i]== '0'||number[i]=='1') 
           { 
		     value=false;
		 
		 }
		
	}
if(value)
	{
		cout<<"Enter value:"<<endl;
        cin>>number;
		  }	 
int i=stoi(number);
return i;
	}
 
   
int main()
{

   int n; 
   cout<<"Enter decimal number"<<endl;
   cin>>n;
   decimalToBinary(n);
   cout<<endl;
   int num = Base2(); 
   cout << binaryToDecimal(num) << endl;  
   return 0; 
   




}
