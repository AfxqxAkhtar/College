#include<iostream>
using namespace std;
class XYZ{
    int arr[10];
    int ind;
    public:
    XYZ(){
        for(int i=0;i<10;i++)
            arr[i]=i+1;
    }
    void display(){
        cout<<"Enter the index to search: ";
        cin>>ind;
        try{
            if(ind<10)
                cout<<arr[ind]<<endl;
            else    
                throw 10; 
        }
        catch(int x){
            cout<<"Index Out of Bounds!"<<endl;
        }
    }
};
int main(){
    XYZ ob;
    ob.display();
}