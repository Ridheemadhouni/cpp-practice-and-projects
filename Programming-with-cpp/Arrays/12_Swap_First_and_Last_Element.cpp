#include <iostream>
using namespace std;

int main(){
    int temp,num;
    int arr[100];
    cout<<"Enter the number of element: ";
    cin>>num;
    
    if(num>100||num<=0){
        cout<<"Invalid input.";
        return 0;
    }
    
    for(int i=0;i<num;i++){
        cout<<"enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    
    temp = arr[0];
    arr[0]=arr[num-1];
    arr[num-1]=temp;
    
    cout<<"update element: ";
    for(int i=0;i<num;i++){
       cout<<arr[i]<<" ";
    }
    
    return 0;
}