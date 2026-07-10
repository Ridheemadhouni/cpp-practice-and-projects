#include <iostream>
using namespace std;

int main() {
    char ans;
    int score = 0;
    cout<<"======== quiz ========"<<endl;
    cout<<"Which of the following is the correct, standard operator used to print output to the console in C++?"<<endl;
    cout<<"a) cin >>"<< endl<< "b) cout<<"<< endl<<"c) print()"<<endl<<"d) system.out.print()\n";
    cout<< "enter answer: ";
    cin>>ans;
    if(ans == 'b' || ans == 'B' ){
        cout<<"correct answer!!!\n";
        score++;
    } else {
        cout<<"wrong!!!\n";
    }
    cout<<"What is the default access specifier for data members and member functions inside a C++ class?\n";
    cout<<"a) public\n"<<"b) protected\n"<<"c) private\n"<<"d) global\n";
    cout<<"enter answer: ";
    cin>>ans;
    if(ans == 'c' || ans == 'C'){
        cout<<"correct answer!!!\n";
        score++;
    } else {
        cout<<"wrong!!!\n";
    }
    cout<<"Which symbol represents the scope resolution operator in C++?\n";
    cout<<"a) :\n"<<"b) .\n"<<"c) ->\n"<<"d) ::\n";
    cout<<"enter answer: ";
     cin>>ans;
    if(ans == 'd' || ans =='D'){
        cout<<"correct answer!!!\n";
        score++;
    } else {
        cout<<"wrong!!!\n";
    }
    cout<<"Which data type is used to store values that can only be either true or false?\n";
    cout<<"a) int\n"<<"b) bool\n"<<"c) char\n"<<"d) float\n";
     cout<<"enter answer: ";
    cin>>ans;
    if(ans =='b' || ans =='B' ){
        cout<<"correct answer!!!\n";
        score++;
    } else {
        cout<<"wrong!!!\n";
    }
    cout<<"How do you write a single-line comment in a C++ program?\n";
    cout<<"a) # comment\nb) /* comment */\nc) // comment\nd) <!-- comment -->\n";
    cout<<"enter answer: ";
     cin>>ans;
    if(ans == 'C' || ans == 'c'){
        cout<<"correct answer!!!\n";
        score++;
    } else {
        cout<<"wrong!!!\n";
    }
    cout<<"your score is: ";
    cout<<score<<endl;
    if(score == 5){
        cout<<"excellent!!!!!\n";
    }else if(score <=3){
        cout<<"god job!!!!!!\n";
    }else{
        cout<<"keep it up!!!!!!!!!!\n";
    }


}