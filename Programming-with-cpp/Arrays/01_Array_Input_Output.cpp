#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int num;
    
    cout<<"Enter the number of element: ";
    cin>>num;
    
    if(num>100 || num<=0){
        cout<<"invalid input";
        return 0;
    }
    
    for(int i=0;i<num;i++){
        cout<<"enter the element of "<<i+1<<" : ";
        cin>>arr[i];
    }
    
    cout<<"The array element are: ";
     for(int i=0;i<num;i++){
       
        cout<<arr[i]<<" ";
    }
    
    return 0;
}