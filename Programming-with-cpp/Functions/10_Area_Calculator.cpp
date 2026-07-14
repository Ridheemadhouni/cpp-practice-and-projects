#include <iostream>
using namespace std;
int Rectangle(int length,int breadth){
    return length*breadth;
}
int Square(int side){
    return side*side;
}
double Circle(double radius){
    return 3.14*radius*radius;
}
int Parallelogram(int base , int height){
    return base*height;
}

int main(){
    int choice,a,b;
    double c;
    cout<<"====== Area calculator =======\n";
    cout<<"1. area of rectangle\n";
    cout<<"2. area of Square\n";
    cout<<"3. area of Circle\n";
    cout<<"4. area of Parallelogram\n";
    cout<<"Enter the choice: ";
    cin>>choice;
    
    switch(choice){
        case 1:
        cout<<"Enter the length: ";
        cin>>a;
        cout<<"Enter the breadth: ";
        cin>>b;
        cout<<"Area of rectangle: "<<Rectangle(a,b);
        break;
        case 2:
        cout<<"Enter the side: ";
        cin>>a;
        cout<<"Area of square: "<<Square(a);
        break;
        case 3:
        cout<<"Enter the radius: ";
        cin>>c;
        cout<<"Area of circle: "<<Circle(c);
        break;
        case 4:
        cout<<"Enter the base: ";
        cin>>a;
        
        cout<<"Enter the height: ";
        cin>>b;
        cout<<"Area of parallelogram: "<<Parallelogram(a,b);
    }
    return 0;
}