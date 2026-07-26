#include <iostream>
using namespace std;

int main(){
    int rows,cols,sum=0;
    int arr[100][100];
    //taking input of number of rows.
    cout<<"Enter the number of rows: ";
    cin>>rows;
     //taking input of number of columns.
    cout<<"Enter the number of columns: ";
    cin>>cols;
    //if condition statement to check input are correct or not.
    if(rows>100||rows<=0||cols>100||cols<=0){
        cout<<"Invalid input.";
        return 0;
    }
    cout<<"Enter the element:\n";
    //using for loop to take input of 2d array and find the sum of element
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
           sum += arr[i][j];    
        }
       
    }
    
   
    cout<<"The sum of element: "<<sum;
    return 0;
}