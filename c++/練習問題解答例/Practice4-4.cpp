#include<iostream>
using namespace std;
int main(void){
    int i;
    int count = 0;
    for(i = 1; i <= 100; i++){
        if(i%7 == 0){ //もし7で割った余りが0、つまり7で割り切れるなら
            count++; //変数countの値を１つ増やす
        }
    }
    cout << count << endl;
}
