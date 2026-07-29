#include <iostream>
using namespace std;

class Student_data {
  public:
    string name;
    int roll_number;
  private:
   int age;
  protected:
     long long Phone_number;
    
    public:
    void data(string n,int num){
        name = n;
        roll_number = num;
      
    }
    
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll Number : "<<roll_number<<endl;
        
    }
};
class Student :public Student_data {
    public:
    void set_Phone_number(){
        Phone_number = 9870000000;
    }
    void display(){
        cout<<"Phone number : "<<Phone_number<<endl;
    }
};

int main(){
Student_data student;
Student number;
  student.data("ridhi",101);
  student.display();
  number.set_Phone_number();
  number.display();
    
    return 0;
}