#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
    int t, n, line_res, del;
    scanf("%d", &t);

    while(t > 0){
        scanf("%d", &n);
        line_res = ((((((n * 567) / 9) + 7492) * 235) / 47) - 498)/10;
        del = (line_res / 10) * 10;

        printf("%d\n", abs(line_res - del));
        t--;
    }

    return 0;
}
