#include<iostream>
using namespace std;
int main(void){
    int H, W;
    cin >> H >> W;
    
    //行または列のマスの数が偶数なら中心のマスはない。
    //例えば行が偶数の以下のマス目に中心のマスない
    //  .....
    //  .....
    //  .....
    //  .....
    //よって行または列の片方でも偶数だったらNo、でなければYesを出力すればよい
    if(H%2 == 0 || W%2 == 0){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
}
