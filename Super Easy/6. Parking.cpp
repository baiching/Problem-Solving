#include<iostream>
#include <cstdio>

using namespace std;

int main(){
    int t, n, maximum, minimum;
    int arr[100000];

    scanf("%d", &t);
    while(t > 0){
        scanf("%d", &n);
        for(int i =0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        maximum = arr[0];
        minimum = arr[0];

        for(int i =0; i < n; i++){
            if(minimum > arr[i]) minimum = arr[i];
            if(maximum < arr[i]) maximum = arr[i];
        }
        printf("%d\n", 2*(maximum- minimum));
        t--;
    }

    return 0;
}
