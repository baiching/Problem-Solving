#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n, m, t;
    scanf("%d", &t);

    while(t > 0){
        scanf("%d %d", &n, &m);
        //printf("%d\n", ((n*m)%2 == 0) ? ((n*m) / 9) : ((n*m) / 9)-1 );
        printf("%d\n", (n/3) * (m/3) );
        t--;
    }
    return 0;
}
