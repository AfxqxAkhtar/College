// Multiple Catch program
// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int b;
//     cin>>b;
//     try{
//         if(b==0)
//             throw 10;
//         else
//             throw 'a';
//     }
//     catch(int a){
//         cout<<"Can't divide a number by Zero!"<<endl;
//     }
//     catch(char c){
//         cout<<a/b<<endl;
//     }
//     cout<<"Thank You!"<<endl;
//     return 0;
// }
// Catch all block
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b;
    cin>>b;
    try{
        if(b==0)
            throw a;
    }
    catch(...){
        cout<<"Can't divide by Zero!"<<endl;
    }
    cout<<"Thank You!"<<endl;
}