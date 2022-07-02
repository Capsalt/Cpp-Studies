#include <stdio.h>
#include <cstdio>
#include <iostream>

using namespace std;

void update(int *a,int *b) {
       
       int sum=(*a)+(*b);
       int dif;
       
       if ((*a)<(*b)) {
       dif=(*b)-(*a);
       }else {
       dif=(*a)-(*b);
       }
       
       cout<<sum<<endl;
       cout<<dif<<endl;
       
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin >> a >> b;
    update(pa, pb);

    return 0;
}
