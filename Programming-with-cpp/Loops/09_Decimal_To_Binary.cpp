#include <iostream>
using namespace std;

int main(){
    int num;
    int binary = 0;
    int place = 1;

    cout << "Enter the decimal number: ";
    cin >> num;

    while(num > 0){
        int remainder = num % 2;
        binary = binary + remainder * place;
        place = place * 10;
        num = num / 2;
    }

    cout << "Binary number: " << binary;

    return 0;
}