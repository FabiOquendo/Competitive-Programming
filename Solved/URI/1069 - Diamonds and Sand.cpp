//============================================================
// Name        : 1069 - Diamonds and Sand.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1069
//============================================================

#include <bits/stdc++.h>

using namespace std;

main(){

    int n, res;
    char c;
    scanf("%d",&n);
    scanf("%c",&c);

    while(n--){

        res=0;
        stack<char> pila;
        scanf("%c",&c);

        while(c!='\n'){

            if(c=='<'){
                pila.push(c);

            } else if(c=='>'&&!pila.empty()){

                pila.pop();
                res+=1;
            }

            scanf("%c",&c);
        }

        printf("%d\n",res);
    }
    return 0;
}
