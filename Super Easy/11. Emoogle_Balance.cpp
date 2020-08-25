#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
    int T, N, sum, count;
    int treats[100000];
    T = 75;
    count = 1;

    while(T > 0){
        scanf("%d", &N);
        if (N == 0) break;
        else {
        sum = 0;
        for(int i = 0; i < N; i++){
            scanf("%d", &treats[i]);
        }

        for(int i = 0; i < N; i++){
            if(treats[i] > 0) sum += 1;
            else if(treats[i] == 0) sum += -1;
        }

        printf("Case %d: %d\n", count, sum);

        count++;
        }
        T--;
    }
}
