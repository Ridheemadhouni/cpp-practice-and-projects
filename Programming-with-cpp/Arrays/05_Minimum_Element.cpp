#include <iostream>
using namespace std;

int main(){
    int num,min;
    int arr[100];
    
    cout<<"Enter the number of element: ";
    cin>>num;
    
    if(num>100||num<=0){
        cout<<"invalid input";
        return 0;
    }
    for(int i=0;i<num;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    min = arr[0];
    for(int i=0;i<num;i++){
        if(i==0){
            min = arr[i];
        }else if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Minimum number : "<<min;
    
    return 0;
}