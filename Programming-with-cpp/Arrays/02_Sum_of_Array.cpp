#include <iostream>
using namespace std;

int main(){
    int num,sum=0;
    int arr[100];
    
    cout<<"Enter the number of element: ";
    cin>>num;
    
    if(num>100||num<=0){
        cout<<"invalid input";
        return 0;
    }
    for(int i=0;i<num;i++){
        cout<<"Enter the elment of "<<i+1<<" : ";
        cin>>arr[i];
       sum +=arr[i];
    }
    cout<<"sum of element: "<<sum<<endl;
    
    return 0;
}