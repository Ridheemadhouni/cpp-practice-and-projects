#include <iostream>
using namespace std;

int main(){
    int num,position,value;
    int arr[100];
    
    cout<<"Enter the number of element: ";
    cin>>num;
    
    if(num>100||num<=0){
        cout<<"invalid input.";
        return 0;
    }
    for(int i=0;i<num;i++){
        cout<<"enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<endl<<endl;
    cout<<"enter position: ";
    cin>>position;
    cout<<"enter element: ";
    cin>>value;
    
    if(position < 1 || position > num + 1){
    cout << "Invalid position.";
    return 0;
}
    for(int i=num;i>=position;i--){
    arr[i]=arr[i-1];
                
     }
     arr[position-1]= value; 
    num++;
    
    
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}