#include<iostream>
using namespace std;
int main(void){
    int i;
    for(i = 1; i <= 100; i++){
        if(i%7 == 0){ //もし7で割った余りが0、つまり7で割り切れるなら
            cout << i << endl; //その数を出力
        }
    }
}
