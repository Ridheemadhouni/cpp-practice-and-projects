#include <iostream>
using namespace std;

int main(){
    int row1,row2,col1,col2;
    int arr1[100][100],arr2[100][100],sum[100][100];
    cout<<"Enter the number of rows for the first array: ";
    cin>>row1;
    cout<<"enter the number of columns for the first array: ";
    cin>>col1;
    if(row1>100||row1<=0||col1>100||col1<=0){
        cout<<"Invalid input.";
        return 0;
    }
    cout<<"Enter the number of rows for the second array: ";
    cin>>row2;
    cout<<"enter the number of columns for the second array: ";
    cin>>col2;
    if(row2>100||row2<=0||col2>100||col2<=0){
        cout<<"Invalid input.";
        return 0;
    }
    if (row1 != row2 || col1 != col2) {
    cout << "Matrix addition is not possible.";
    return 0;
}
    cout<<"Enter first array element:\n";
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>arr1[i][j];
        }
    }
   
    cout<<"Enter second array element:\n";
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            sum[i][j] =arr1[i][j]+arr2[i][j];
        }
        
    }
    cout<<"Sum of matrix:\n";
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
  
    return 0;
}