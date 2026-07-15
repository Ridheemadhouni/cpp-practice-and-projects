#include <iostream>
using namespace std;

int main(){
    int num;
    int arr[100];
    
    cout<<"Enter the number of elements: ";
    cin>>num;
    
    if(num>100||num<=0){
        cout<<"invalid input.";
        return 0;
    }
    
    for(int i = 0;i<num;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    
    for(int i =num-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}