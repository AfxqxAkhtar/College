#include <iostream>
using namespace std;
template<class T>
void sort(T *list,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(list[i]>list[j]){
                T temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
}
int main(){
    int arr[5]={7,6,5,4,3};
    sort(arr,5);
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
}