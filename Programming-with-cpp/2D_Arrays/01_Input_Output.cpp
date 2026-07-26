#include <iostream>
using namespace std;

int main() {
    int row, col;
    int arr[100][100];
//It's take input of number of rows.
    cout << "Enter the number of rows: ";
    cin >> row;
//It's take input of number of columns.
    cout << "Enter the number of columns: ";
    cin >> col;
//using if condition statement to check number of rows and cols are correct or not.
    if (row <= 0 || row > 100 || col <= 0 || col > 100) {
        cout << "Invalid input.";
        return 0;
    }

    cout << "Enter the elements:\n";
//for-loop for take input of 2d array element.
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The matrix:\n";
//for-loop for printing element of 2d array.
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}