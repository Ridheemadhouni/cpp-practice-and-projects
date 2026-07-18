#include <iostream>
using namespace std;

int main(){
    int row,found,col;
    int arr[100][100];
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>col;
    
    if(row>100||row<=0||col>100||col<=0){
        cout<<"Invalid input.";
        return 0;
    }
    cout<<"Enter the element:\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Search element: ";
    cin>>found;
    bool search = false;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(found==arr[i][j]){
               search = true;
               break;
            }
        }
    }
    if(search){
        cout<<"Element found.";
    }else{
        cout<<"Element not found.";
    }
    return 0;
}