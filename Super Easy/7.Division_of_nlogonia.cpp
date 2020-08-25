#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int K, N, M, X, Y, val1, val2;

    while(1){
        scanf("%d", &K);
        if(K == 0 || K < 0){
            break;
        }
        else {
            scanf("%d %d", &N, &M);
            for (int i = 0; i < K; i++){
                scanf("%d %d", &X, &Y);
                val1 = X - N;
                val2 = Y - M;

                if(val1 == 0 || val2 == 0) printf("divisa\n");
                else if(val1 > 0 && val2 > 0) printf("NE\n");
                else if(val1 < 0 && val2 > 0) printf("NO\n");
                else if(val1 < 0 && val2 < 0) printf("SO\n");
                else printf("SE\n");
            }
        }
        printf("=========================\n");
    }

    return 0;
}
