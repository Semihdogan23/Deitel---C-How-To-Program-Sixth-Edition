#include<iostream>
using namespace std;
template<typename T>
void printArray(const T* const array,int count){
    for(int i=0;i<count;i++)
    cout<<array[i]<<" ";
    
}
int main(){
    const int aCount=5;
    const int bCount=7;
    const int cCount=6;
    int a[aCount]={1,2,3,4,5};
    double b[bCount]={1,2,3,4,5,6,7};
    char c[cCount]="HELLO";
    cout<<"Array a contains: "<<endl;

    printArray(a,aCount);
    cout<<"array b contains: ";
    printArray(b,bCount);
    cout<<"array c contains: ";
    printArray(c,cCount);



}