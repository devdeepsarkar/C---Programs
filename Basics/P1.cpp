#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[999];
    int B[999];
    int C[999];
    int size = 0;
    for(int i=0; i<999; i++){
        int num;
        cin >> num;
        // cout << num;
        if(num == -1){
            break;
        }
        else{
            A[i] = num;
            size++;
        }

    }
    // cout << A[0];
    int b = 0, c = 0, temp=-2;
    for(int i=0; i<size; i++){
        int count = 0;
        for(int j = 0; j < size; j++){
            if(A[i] == A[j]){
                C[c] = A[i];
                c++;
                A[i] == temp;
                temp--;
                count++;
            }
        }
        // cout << count;
        if(count == 1){
            B[b] = A[i];
            b++;
        }
        // if(count > 1){
        //     cout << "Hello";
        //     A[i] = temp;
        //     cout << "out " << A[i]; 
        //     temp--;
        // }
    }
    if(b != 0)
        for(int i=0; i<b; i++){
            cout << B[i] << " ";
        }

    if(c != 0){
    cout << endl;
        for(int i=0; i<b; i++){
            cout << C[i] << " ";
        }}
        for(int i=0; i<size; i++){
            cout << A[i] << " ";
        }

    

    return 0;

}