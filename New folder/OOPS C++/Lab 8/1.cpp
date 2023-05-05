#include<iostream>
using namespace std;
class Distance{
    protected:
    int feet;
    int inches;
    public:
    Distance(){};
    Distance(int x,int y){
        feet=x;
        inches=y;
    }
    Distance operator +(Distance c){
        Distance temp;
        temp.feet=feet+c.feet;
        temp.inches=inches+c.inches;
        return temp;
    }
    void display(){
        cout<<feet<<" Feet &"<<inches<<" Inches"<<endl;
    }
};
int main(){
    Distance A(10,4);
    Distance B(7,2);
    Distance C=A+B;
    A.display();
    B.display();
    C.display();
    return 0;
}