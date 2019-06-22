#include<iostream>
using namespace std;
int main(void){
    int array[5];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    cout << array[0] << " " << array[1] << " " << array[2] << " " << array[3] << " " << array[4] << endl;
    
    //こちらでもOK！
    int i;
    for(i=0; i < 5; i++){
        cout << array[i];
        if(i != 4)cout << " "; //空白スペースを出力
        else cout << endl; //最後は空白スペースではなく改行を出力
    }
}
