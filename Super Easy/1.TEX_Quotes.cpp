#include<cstdio>
#include <iostream>

using namespace std;

int main(){
    char line[10000000];
    int counter = 0;
    while(gets(line)){
    for(int i =0; line[i]; i++){
        if (line[i] == '\"'){
            counter++;
            if(counter%2 == 0) {

                printf("\'\'");
            }
            else{
                printf("`");
                printf("`");
            }

        }
        else printf("%c", line[i]);
    }
    printf("\n");
    }
    return 0;
}
