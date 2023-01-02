#include <bits/stdc++.h>

using namespace std;

void reverse_number(int n){
    int x = n;
    int y;   
    while(x!=0){
        y = x%10;
        cout << y;
        x = x/10;
        
    }
}

int main(){
    reverse_number(95184);
}