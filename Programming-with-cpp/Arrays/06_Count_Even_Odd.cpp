#include <iostream>
using namespace std;

int main(){
    int num,arr[100];
    int even = 0,odd = 0;
    
    cout<<"Enter the number of elements: ";
    cin>>num;
    
    if(num>100||num<=0){
        cout<<"invalid input";
        return 0;
    }
    for(int i=0;i<num;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"Odd elements: "<<odd<<endl;;
    cout<<"Even elements: "<<even<<endl;
    return 0;
    
}