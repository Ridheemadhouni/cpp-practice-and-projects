#include <iostream>
using namespace std;

int main(){
    int num,arr[100];
    cout<<"enter the number of element: ";
    cin>>num;
    if(num>100||num<=0){
        cout<<"invalid input.";
        return 0;
    }
    for(int i=0;i<num;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    int temp = arr[num-1];
    for(int i=num-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    
    arr[0]=temp;
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}