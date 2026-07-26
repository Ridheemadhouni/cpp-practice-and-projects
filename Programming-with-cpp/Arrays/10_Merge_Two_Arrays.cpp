#include <iostream>
using namespace std;

int main(){
    int num1,num2,num;
    int arr1[100];
    int arr[200];
    int arr2[100];
    cout<<"Enter the number of element for first array: ";
    cin>>num1;
    if(num1>100 ||num1<=0){
        cout<<"Invalid input.";
        return 0;
    }
    for(int i=0;i<num1;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr1[i];
    }
    cout<<"Enter the number of element for second array: ";
    cin>>num2;
    if(num2>100 ||num2<=0){
        cout<<"Invalid input.";
        return 0;
    }
    for(int i=0;i<num2;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr2[i];
    }
    
    num = num1;
    for(int i=0;i<num;i++){
       arr[i]=arr1[i];
    }
   
    for(int i=0;i<num2;i++){
        arr[i+num1]=arr2[i];
    }
    cout<<"Element are: ";
     num = num1+ num2;
     for(int i=0;i<num;i++){
      cout<<arr[i]<<" ";
    }
    
    
    return 0;
}