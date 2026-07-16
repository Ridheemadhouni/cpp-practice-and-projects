#include <iostream>
using namespace std;

int main(){
    int num;
    int arr[100];
    cout<<"Enter the number of element: ";
    cin>>num;
    if(num>100|| num<=0){
        cout<<"invalid input.";
        return 0;
    }
    for(int i=0;i<num;i++){
        cout<<"enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
   int temp =arr[0];
   
    
   for(int i=0;i<num-1;i++){
     
     arr[i]=arr[i+1];
   }
    arr[num - 1] = temp;
    cout<<"Update list: ";
   for(int i =0;i<num;i++){
       cout<<arr[i]<<" ";
   }
    
    return 0;
}