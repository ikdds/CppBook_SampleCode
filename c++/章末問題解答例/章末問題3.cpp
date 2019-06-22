#include<iostream>
using namespace std;
int main(void){
    int team = 0;
    int a, b;
    cin >> a >> b;

    //とりあえず３人１組をできるだけ作る
    team += a/3;
    team += b/3;
    
    //余った人たちで1チーム作る
    //もし余った人がいないなら新たにチームは作らない。
    if(a%3 != 0){
        team++;
    }
    if(b%3 != 0){
        team++;
    }
    
    cout << team << endl;
}
