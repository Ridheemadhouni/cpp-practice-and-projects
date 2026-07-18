#include<iostream>
using namespace std;

int main(){
    int row,col,sum;
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
     for(int j=0;j<col;j++){
          sum=0;
        for(int i=0;i<row;i++){
          sum += arr[i][j];
        }
        cout<<"sum of column "<<j+1<<" : "<<sum<<endl;
    }
    return 0;
}