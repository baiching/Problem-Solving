#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int T, K, amount;
    amount = 0;
    string operation;

    scanf("%d", &T);
    while(T > 0){
        cin>>operation;

        if(operation == "donate") {
                scanf("%d", &K);
                amount += K;
        }
        else if(operation == "report") printf("%d\n", amount);

        T--;
    }
    return 0;
}
