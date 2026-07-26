#include <iostream>
using namespace std;

void leapyear(int year){
    if(year%400 == 0){
        cout<<"Leap year.";
    }else if (year%100 == 0){
        cout<<"Not leap year.";
    }else if(year%4 == 0){
        cout<<"Leap year.";
    }else{
        cout<<"Not leap year.";
    }
}

int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    leapyear(year);
    
    return 0;
}