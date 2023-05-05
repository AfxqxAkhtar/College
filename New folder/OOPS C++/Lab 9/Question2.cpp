// WAP to display data of two different types using function template with multiple arguments
#include<iostream>
using namespace std;
template<typename T,typename U>
void display(T a,U b){
    cout<<a<<" "<<b<<endl;
}
int main(){
    display (5,10.1);
    return 0;
}
