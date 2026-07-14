#include <iostream>
using namespace std;

int main(){
    int a, b, hcf, lcm;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int min = (a < b) ? a : b;

    for(int i = 1; i <= min; i++){
        if(a % i == 0 && b % i == 0){
            hcf = i;
        }
    }

    lcm = (a * b) / hcf;

    cout << "HCF = " << hcf << endl;
    cout << "LCM = " << lcm;

    return 0;
}