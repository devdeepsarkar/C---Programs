#include <bits/stdc++.h>
using namespace std;

int main(){
    
    for(int i=0; i<5; i++){
        cout << "Hello for" << endl;
    }


    int j = 0;
    while(j < 50){
        cout << "Hello while" << endl;
        j = j + 10;
    }

    int k = 0;
    do{
        cout << "Hello do" << endl;
        k += 10;
    }while(k < 50);

    return 0;
}