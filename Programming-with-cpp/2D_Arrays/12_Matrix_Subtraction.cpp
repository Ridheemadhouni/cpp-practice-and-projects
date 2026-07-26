#include <iostream>
using namespace std;

int main(){
    int row,col;
    int arr1[100][100],arr2[100][100],sub[100][100];
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>col;
    if(row>100||row<=0||col>100||col<=0){
        cout<<"Invalid input.";
        return 0;
    }
    cout<<"Enter first Matrix element:\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter second Matrix element:\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sub[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    cout<<"Difference of matrix:\n";
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<sub[i][j]<<" ";
        }
        cout<<endl;
     }
    return 0;
}