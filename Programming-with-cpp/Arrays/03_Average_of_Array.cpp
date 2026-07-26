#include <iostream>
using namespace std;

int main(){
    int num,sum=0;
    double average = 0;
    int arr[100];
    
    cout<<"Enter the number of elements: ";
    cin>>num;
    
    if(num>100||num<=0){
        cout<<"invalid input";
        return 0;
    }
    for(int i=0;i<num;i++){
        cout<<"Enter  elment "<<i+1<<" : ";
        cin>>arr[i];
       sum +=arr[i];
    }
    average = (double)sum/num;
    cout<<"average of elements: "<<average<<endl;
    
    return 0;
}