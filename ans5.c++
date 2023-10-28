#include<bits/stdc++.h>
using namespace std;

class Number{
    private:
    int n1;
    int n2;

    public:
    void getData(int n1,int n2){
        this->n1=n1;
        this->n2=n2;
    }

    int checkGreatest(){
        return((this->n1 > this->n2)?this->n1:this->n2);
    }    
};
int main(){
    int a,b;
    Number n;
    cout<<"Enter the numbers:\n";
    cin>>a>>b;
    n.getData(a,b);
    cout<<"Greatest number is: "<<n.checkGreatest();    
}