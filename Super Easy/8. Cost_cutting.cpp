#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int T, sum, maximum, minimum;
    int number[3];

    scanf("%d", &T);
    for(int i =0; i < T; i++){
        for(int j =0; j < 3; j++){
            scanf("%d", &number[j]);
        }
        maximum = number[0];
        minimum = number[0];

        sum = 0;
        for(int j =0; j < 3; j++){
            if(minimum > number[j]) minimum = number[j];
            if(maximum < number[j]) maximum = number[j];
            sum += number[j];
        }
        printf("Case %d: %d\n", i + 1, sum - (maximum + minimum));
    }
    return 0;
}
