#include <iostream>
using namespace std;

int main(){
    int num,positive = 0,negative = 0,zero = 0;
    int arr[100];
    
    cout<<"Enter the number of elements: ";
    cin>>num;
    
    if(num>100 || num<=0){
        cout<<"invalid input.";
        return 0;
    }
    
    for(int i=0;i<num;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
        if(arr[i]>0){
            positive++;
        }else if(arr[i]==0){
            zero++;
        }else{
            negative++;
        }
    }
    
    cout<<"Negative elements : "<<negative<<endl;
    cout<<"Positive elements: "<<positive<<endl;
    cout<<"Zero elements: "<<zero<<endl;
    
    return 0;
}