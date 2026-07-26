#include <iostream>
using namespace std;

int main(){
    int num,oldvalue,newvalue;
    int arr[100];
    cout<<"Enter the number of element: ";
    cin>>num;
    if(num>100||num<=0){
        cout<<"Invalid input.";
        return 0;
    }
    for(int i = 0;i<num;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"Enter replace value: ";
    cin>>oldvalue;
    cout<<"Enter New value: ";
    cin>>newvalue;
    bool value = false;
     for(int i = 0;i<num;i++){
    if(arr[i]==oldvalue){
        arr[i]=newvalue;
        value= true;
    } 
       
    }
     if(value == true){
     cout<<"Update array: ";
      for(int i = 0;i<num;i++){
        cout<<arr[i]<<" ";
    }
     
     }else{
         cout<<"wrong replace number";
     }
    
    return 0;
}