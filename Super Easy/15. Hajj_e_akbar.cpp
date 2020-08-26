#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    string inp;
    int count = 1;

    while(1){
        cin >> inp;
        if(inp == "Hajj") printf("Case %d: Hajj-e-Akbar\n", count++);
        else if(inp == "Umrah") printf("Case %d: Hajj-e-Asghar\n", count++);
        else if(inp == "*") break;
    }
    return 0;
}
