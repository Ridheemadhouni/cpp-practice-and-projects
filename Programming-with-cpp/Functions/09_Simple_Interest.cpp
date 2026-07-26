#include <iostream>
using namespace std;
int simpleinterest(int rate,int principal,int time){
    
   int SI =(rate*principal*time)/100;
    return SI;
}
int main(){
    int rate,principal,time;
    cout<<"Enter the principal: ";
    cin>>principal;
    cout<<"Enter the rate: ";
    cin>>rate;
    cout<<"Enter the time: ";
    cin>>time;
    cout<<"Simple interest is: "<<simpleinterest(rate,principal,time);
    return 0;
}