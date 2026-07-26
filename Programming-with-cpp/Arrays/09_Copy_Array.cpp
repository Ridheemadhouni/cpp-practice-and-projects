#include <iostream>
using namespace std;

int main(){
    int num;
    int arr1[100];
    int arr2[100];
    
    cout<<"Enter the number of elements: ";
    cin>>num;
    
    if(num>100||num<=0){
        cout<<"Invalid input.";
        return 0;
    }
    
    for(int i=0;i<num;i++){
        cout<<"enter element "<<i+1<<" : ";
        cin>>arr1[i];
    }
    
    for(int i=0;i<num;i++){
      arr2[i]=arr1[i];
    }
    
    cout<<"Element of second array: ";
    
    for(int i=0;i<num;i++){
        
       cout<<arr2[i]<<" ";
    }
    
    return 0;
}