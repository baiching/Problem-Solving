#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n, f, size_of_farm, total_animal, environment_friendliness, sum;

    scanf("%d", &n);
    while(n > 0){
        scanf("%d", &f);

        sum =0;
        while(f > 0){
            scanf("%d %d %d", &size_of_farm, &total_animal, &environment_friendliness);
            sum += (size_of_farm * environment_friendliness);

            f--;
        }
        printf("%d\n", sum);

        n--;
    }

    return 0;
}
