// Rewrite program ii. using class template
#include<iostream>
using namespace std;
template<class T>
class Display{
    T a,b;
    public:
    Display(T x,T y){
        a=x;
        b=y;
    }
    void dis(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    Display ob1(5,10);
    Display ob2(5.1,10.1);
    ob1.dis();
    ob2.dis();
    return 0;
}