// overload operator "==" to compare two objects
#include<iostream>
using namespace std;
class Time{
    int hour;
    int mins;
    int secs;
    public:
    Time(){}
    Time(int x,int y,int z){
        hour=x;
        mins=y;
        secs=z;
    }
    friend int operator ==(Time &,Time &);
};
int operator ==(Time &a,Time &b){
    int x=(a.hour==b.hour);
    int y=(a.mins==b.mins);
    int z=(a.secs==b.secs);
    return x&&y&&z;
}
int main(){
    Time t1(12,45,55);
    Time t2(13,45,55);
    if(t1==t2)
        cout<<"Equal"<<endl;
    else    
        cout<<"Not Equal"<<endl;
    return 0;
}