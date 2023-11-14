#include<iostream>

void pm(int start,int end);
void hanoi(int n,int start,int end){
    if(n==1){
        pm(start,end);
    }else{
        int other = 6 - (start +end);
        hanoi(n-1,start,other);
        pm(start,end);
        hanoi(n-1,other,end);
    }
}
void pm(int start, int end){
    std::cout<<start<<"->"<<end<<std::endl;
}

int main(){
    int n;
    std::cout<<"Enter number of discs: ";
    std::cin>>n;
    std::cout<<"We assume the number of rods be 3\n";
    hanoi(n,1,3);
    return 0;
}