#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n;
    string seq;

    scanf("%d", &n);
    while(n > 0){
        cin >> seq;
        if(seq == "1" || seq== "4" || seq == "78") printf("+\n");
        else if(seq[seq.length()-2] == '3' && seq[seq.length() - 1] == '5') printf("-\n");
        else if (seq[0] == '9' && seq[seq.length()-1] == '4') printf("*\n");
        else if(seq[0] == '1' && seq[1] == '9' && seq[2] == '0') printf("?\n");

        n--;
    }

    return 0;
}
