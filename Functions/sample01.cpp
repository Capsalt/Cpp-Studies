#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    
    int greater;
    
    greater=a;
    
    if (b>greater) 
        greater=b;
        
    if (c>greater) 
        greater=c;
        
    if (d>greater) 
        greater=d;
    
    return greater;
}



int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    
    int ans = max_of_four(a, b, c, d);
    cout<<ans<<endl;
    
    return 0;
}
