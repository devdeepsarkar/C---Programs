#include <bits/stdc++.h>
using namespace std;
/*
Take the age from the user and then decide accordingly
1. if age < 18,
    print-> "not eligible for job"
2. if age >= 18 and age <= 54,
    print-> "eligible for job"
3. if age >= 55 and age <= 57,
    print-> "eligible for job, but retirement soon."
4. if age > 57,
    print-> "retired"

*/
int main(){
    int age;
    cin >> age;
    if(age < 18){
        cout << "not eligible for job";
    }
    else if(age <= 57){
        cout << "eligible for job";
        if(age >= 55){
            cout << ", but retirement soon";
        }
    }
    else{
        cout << "retired";
    }
}

// 18 //eligible for job
// 60 //retired
// 56 //eligible for job, but retirement soon
// 5 //not eligible for job