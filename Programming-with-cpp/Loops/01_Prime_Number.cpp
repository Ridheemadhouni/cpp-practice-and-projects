#include <iostream>
using namespace std;

int main(){
    int num;
    int r = 0;
    cout<<"Enter the number: ";
    cin>>num;
    
    if (num <= 1) {
    cout << "The number is not prime." << endl;
    return 0;
    }
   for(int i=2;i*i<=num;i++){
       if(num%i==0){
          r++;
          break;
       }
   }
   if(r>0){
       cout<<"Not prime number";
   }else{
       cout<<"Prime number";
   }
}