#include <iostream>
using namespace std;

int main(){
    int num,position;
    int arr[100];
    cout<<"enter the number of element:";
    cin>>num;
    if(num>100||num<=0){
        cout<<"Invalid input.";
        return 0;
    }
    for(int i=0;i<num;i++){
        cout<<"enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"Enter the position: ";
    cin>>position;
    if(position>num||position<1){
        cout<<"invalid input.";
        return 0;
    }
    
    for(int i=position-1;i<num-1;i++){
        arr[i]=arr[i+1];
    }
    num--;
    cout<<"update list: ";
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}