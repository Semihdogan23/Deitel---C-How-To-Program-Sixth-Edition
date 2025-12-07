#ifndef MEMBERİNİTİLİAZER_H
#define MEMBERİNİTİLİAZER_H

class Increment{
public:
Increment(int =0,int =1);
void print() const ;
void addIncrement(){
    count+=incremant;
}
private:
int count;
const int incremant;


};
#endif