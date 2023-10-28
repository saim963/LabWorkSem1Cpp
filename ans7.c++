#include<bits/stdc++.h>
using namespace std;
//reference of this pointer
class MyClass{
    public:
    int*p;
    //constructor MyClass
    MyClass(int*p){
        this->p=p;
    }
    int*getPtr(){
        return this->p;
    }
};
int main(){
    int*p;
    MyClass obj(p);
    cout<<obj.getPtr()<<endl;
}