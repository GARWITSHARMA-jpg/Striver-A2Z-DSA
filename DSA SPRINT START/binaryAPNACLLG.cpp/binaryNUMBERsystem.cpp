#include <iostream>
using namespace std;

int decBinary(int decNum){
 int ans = 0, pow = 1; // pow =1 mean 10 to the power zero.
  while(decNum>0){
  int rem=decNum%2;
  decNum/=2;
  ans = ans+(rem*pow);
  pow = pow*10; 
  }
  return ans; // binary form
 }

 int binToDecimal(int binNum){
   int ans=0,pow=1; // pow=1 means 2 to the power 0.
   while(binNum>0){
   int rem = binNum%10;
    ans = ans + (rem*pow);
     binNum = binNum/10;
     pow = pow*2;
   }
   return ans;
 }

 int main(){
   cout<< binToDecimal(1010)<<endl;
 }

//  int main (){
//    for(int i=1;i<=10;i++){
//       cout<<decBinary(i)<<endl;
//    }
//    return 0;
//  }