#include <iostream>
using namespace std;

int main(){
    int arr[100][100];
    int row,col;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of column: ";
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
    cout<<"Transpose of matrix:\n";
     for(int j=0;j<col;j++){
        for(int i=0;i<row;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
    return 0;
    
}