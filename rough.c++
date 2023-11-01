#include<bits/stdc++.h>
using namespace std;
void fibonacci(){
    //fibonaccia series sum of previous two
    int first,second,n;
    cout<<"Enter no of terms: ";
    cin>>n;
    cout<<"Enter first element of the series: ";
    cin>>first;
    cout<<"Enter second element of the series: ";
    cin>>second;
    for(int i=1; i<=n;i++){
        cout<<first<<" ";
        int term=first+second;
        first = second;
        second=term;
    }
}
int main(){
    // fibonacci();
}