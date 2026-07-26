#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int num,max;
    
    cout<<"Enter the number of element: ";
    cin>>num;
    
    if(num>100||num<=0){
        cout<<"invalid input";
        return 0;
    }
   
    
    for(int i=0;i<num;i++){
        cout<<"enter element "<<i+1<<" :";
        cin>>arr[i];
       
    }
    max = arr[0];
     for(int i=0;i<num;i++){
      if(i==0){
          max = arr[i];
      }else if(arr[i]>max){
            max = arr[i];
        }   
     }
    cout<<"Maximum number is: "<<max;
    
    
    return 0;
}