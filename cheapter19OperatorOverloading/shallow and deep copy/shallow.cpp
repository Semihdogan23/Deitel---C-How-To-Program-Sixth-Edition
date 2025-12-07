#include<iostream>
using namespace std;
class ShallowCopyExample{
    private:
    int *data;
    public:
    //constructor
    ShallowCopyExample(int value){
        data=new int;
        *data=value;
        cout<<"Constructor:Dynamic memory allocated. Value"<<*data<<endl;
     }
     ShallowCopyExample(const ShallowCopyExample &source){
        data=source.data;
        cout<<"shallow copy constructor:adress copied. Data= "<<*data<<endl;

     }
     ~ShallowCopyExample(){
        delete data;//belleği serbest bırak 
        cout<<"dynamic memory released";
     }
     void display(){
        cout<<"Data: "<<*data<<"(Address:" <<data<<")\n";}
        void setValue(int value){
            *data=value;
        } 
     };
     
     int main(){
        ShallowCopyExample x(23);//constructor çağrılır
        x.display();
        ShallowCopyExample y(x);//shallow copy constructor
        y.display();
        x.setValue(45);
        cout<<"\nAfter modifying x1:\n";
        x.display();
        y.display();



     }



