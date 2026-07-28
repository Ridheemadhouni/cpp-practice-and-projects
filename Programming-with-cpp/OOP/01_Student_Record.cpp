#include <iostream>
#include <string>
using namespace std;

class Student_Record
{
private:
int rollnumber;
string name;
float  marks;
public:
void set_detail(int r, string n, float m){
   
if(m<0 || m>100){
    cout<<"Invalid marks."<<endl;
}else{
    rollnumber = r;
    name = n;
    marks = m;
}
}
void display(){
    cout<<"Roll number: "<<rollnumber<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Marks: "<<marks<<endl;
    
}

   
};

int main(){
Student_Record obj1;
    obj1.set_detail(12,"Ridhi",89);
    obj1.display();
    return 0;
}