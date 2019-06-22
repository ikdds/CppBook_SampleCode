#include<iostream>
using namespace std;
int main(void){
    int i;
    for(i = 1; i <= 128; i++){
        if(128%i == 0){ //128をiで割った余りが0ならiは128の約数
            cout << i << endl;
        }
    }
}
