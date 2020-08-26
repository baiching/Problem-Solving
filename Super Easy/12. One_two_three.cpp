#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    string one = "one";
    string two = "two";
    string inp;
    int i_one, i_two, t;

    scanf("%d", &t);
    while(t > 0){
            cin>>inp;
    if(inp.length() == 5) printf("3\n");
    else{
        i_one = 0;
        i_two = 0;
        for(int i = 0; i < inp.length(); i++){
            if(inp[i] == one[i]) i_one += 1;
            else if(inp[i] == two[i]) i_two += 1;
        }
        if(i_one >= 2) printf("1\n");
        else if(i_two >= 2) printf("2\n");
    }
    t--;
    }
    return 0;
}
