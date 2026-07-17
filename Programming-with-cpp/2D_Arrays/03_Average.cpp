#include <iostream>
using namespace std;

int main(){
    int row,col,sum=0;
    double average;
    int arr[100][100];
     cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of columns: ";
    cin >> col;

    if (row <= 0 || row > 100 || col <= 0 || col > 100) {
        cout << "Invalid input.";
        return 0;
    }

    cout << "Enter the elements:\n";

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }
    average = static_cast<double>(sum) / (row * col);
    cout << "The average of all elements is: " << average;
    
    
    return 0;
}