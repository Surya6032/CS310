#include <iostream>
#include <stdio.h>
#include <string.h>
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

int main()
{

   int n = 17; 
   decimalToBinary(n);
   cout<<endl;
   int num = 10101001; 
   cout << binaryToDecimal(num) << endl;  
   return 0; 






}













