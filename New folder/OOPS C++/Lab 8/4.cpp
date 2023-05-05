// overload the operator '>' and '==' to compare two object
#include<iostream>
using namespace std;
class Distance{
    int time;
    public:
    Distance(){};
    Distance(int x){
        time=x;
    }
    friend void operator >(Distance d1,Distance d2){
        int x=d1.time>d2.time;
        if(x)
            cout<<"Distance 1 is greater than Distance 2"<<endl;
        else
            cout<<"Distance 2 is greater than Distance 1"<<endl;
    }
    friend void operator ==(Distance d1,Distance d2);
};
void operator ==(Distance d1,Distance d2){
    int x=(d1.time==d2.time);
    if(x)
            cout<<"Equal Distance"<<endl;
    else    
            cout<<"Not Equal Distance"<<endl;

}
int main(){
    Distance d1(50);
    Distance d2(70);
    d1>d2;
    d1==d2;
    return 0;
}