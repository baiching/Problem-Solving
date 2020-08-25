#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
    int count = 1;
    int input_case = 2000;
    string lang;
    while(input_case > 0){
        cin >> lang;

        if(lang == "HELLO") printf("Case %d: ENGLISH\n", count);
        else if(lang == "HOLA") printf("Case %d: SPANISH\n", count);
        else if(lang == "HALLO") printf("Case %d: GERMAN\n", count);
        else if(lang == "BONJOUR") printf("Case %d: FRENCH\n", count);
        else if(lang == "CIAO") printf("Case %d: ITALIAN\n", count);
        else if(lang == "ZDRAVSTVUJTE") printf("Case %d: RUSSIAN\n", count);
        else if(lang == "#") break;
        else printf("Case %d: UNKNOWN\n", count);

        count++;
        input_case--;
    }
}
