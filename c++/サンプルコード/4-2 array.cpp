#include<iostream>
using namespace std;
int main(void){
    int a[1000];
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    cout << a[0] + a[1] << endl; // 0+1=1
    cout << a[2] / a[1] << endl; // 2/1=2
}
