// unary -
#include<iostream>
using namespace std;
 class Unary{
    int feet;
    int inches;
    public:
    Unary(int x,int y){
        feet=x;
        inches=y;
    }
    void show(){
        cout<<"Feet = "<<feet<<" Inches = "<<inches<<endl;
    }
    void operator-(){
        feet=-feet;
        inches=-inches;
    }
 };
 int main(){
    Unary ob(10,5);
    ob.show();
    -ob;
    ob.show();
    return 0;
 }