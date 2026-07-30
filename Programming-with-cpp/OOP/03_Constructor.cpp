#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;
    int roll_number;
  
     Student(){
        cout<<"Constructor without parameter."<<endl;
        name = "unknown";
        age = 0;
        roll_number = 1;
    }
     Student(string n, int a, int r){
        name = n;
        age = a;
        roll_number = r;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll Number : "<<roll_number<<endl;
    }
};

int main(){
    cout<<"Student 1"<<endl;
    Student s1;
    s1.display();
    cout<<"\nStudent 2"<<endl;
    Student s2("ridhi",20,2);
    s2.display();
    
    return 0;
}