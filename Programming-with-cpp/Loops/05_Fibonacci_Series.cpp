#include <iostream>
using namespace std;

int main(){
    int num;
    int first = 0;
    int second = 1;
    int next;
    cout<<"Enter the number: ";
    cin>>num;
     if (num <= 0) {
        cout << "Invalid input.";
    }
    else if (num == 1) {
        cout << first;
    }
    else {
        cout << first << " " << second << " ";
    }
    for(int i=3;i<=num;i++){
        next = first + second;
        cout<<next<<" ";
        first = second;
        second = next;
    }
    return 0;
}