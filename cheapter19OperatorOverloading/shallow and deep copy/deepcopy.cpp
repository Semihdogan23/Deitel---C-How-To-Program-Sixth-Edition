#include<iostream>
using namespace std;

class DeepCopy{

private:
int *data;
public:
//constructor
DeepCopy(int value){
    data=new int;
    *data=value;
    cout<<"constructor:Dynamic memory allocated.Value= "<<*data<<endl;
}
//deep copy constructor
DeepCopy(const DeepCopy &source){
data=new int;
*data=*source.data;
cout<<"deep  copy constructor: "<<*data<<endl;
}
~DeepCopy(){
    delete data;
    cout<<"destructor: dynamic memory released.\n";
}
void display()const{
    cout<<"Data: "<<*data<<" (Address: )"<<data<<"\n";
    }
void setValue(int value){
    *data=value;
}
};
int main(){
DeepCopy x1(34);
x1.display();

DeepCopy y3(56);
y3.display();
//orijinal nesne üzerinde değişiklik yap
x1.setValue(99);
cout<<"\n After modifiying x1\n";
x1.display();
y3.display();


}
