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

void palindrome(int x){
    int num = x;
    int ans = 0 ;
    while (num!=0)
    {
        ans = ans*10 + num%10;
        num = num%10;
        
    }
    cout << ans;
    
}

//GCD of two numbers
void gcd(int num1, int num2){
    if(num1%num2 == 0 && num2%num2 == 0){
        cout << num2;
    }
    else{
        cout << num1;
    }
}

//to check amstrong number
void amstrong(int num){

}

// print all divisors
void printAllDivisors(int n){
    for(int i = 1; i<=n;i++){
        if(n%i == 0){
            cout << i << " ";
        }
    }
}

// CHeck for prime number
void checkPrime(int num){
    if(num%2 == 0 || num%3 == 0 || num%5 == 0 || num%7 == 0 || sqrt(num)){
        cout << "Not a prime number";
    }
    else{
        cout << "It is a prime number";
    }
}


int main(){
    // reverse_number(95184);
    // palindrome(121);
    // gcd(4,2);
    // printAllDivisors(100);
    checkPrime(169);
}