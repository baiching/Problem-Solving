#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int T, L, W, H;
    int count = 1;

    scanf("%d", &T);
    while(T > 0){
        scanf("%d %d %d", &L, &W, &H);
        if(L > 20 || W > 20 || H > 20) printf("Case %d: bad\n", count++);
        else if(L <= 20 && W <= 20 && H <= 20) printf("Case %d: good\n", count++);
        T--;
    }
    return 0;
}
