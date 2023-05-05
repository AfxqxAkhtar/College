#include<iostream>
using namespace std;
class XYZ{
    int n;
    public:
    void display(){
        cout<<"Enter a Number: ";
        cin>>n;
        try{
            if(n!=0){
                cout<<20/n;
            }
            else{
                throw 10;
            }
        }
        catch(int x){
            cout<<"Can't divide by 0!"<<endl;
        }
    }
};
int main(){
    XYZ ob;
    ob.display();
    return 0;
}