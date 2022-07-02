#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int N;
    int a[10000];
    
    cin>>N;
    
    for (int i=1; i<=N; i++) {
    cin>>a[i];
    }
    
    for (int i=0; i<N; i++) {
    cout<<a[N-i]<<" ";
    }
    return 0;
}
