#include<iostream>
using namespace std;
int main(void){
    int n, i;
    cin >> n;
    for(i = 1; i <= n%10; i++){ //n%10はnの１桁目を表します
        cout << "Yes" << endl;
    }
}
