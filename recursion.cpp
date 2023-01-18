#include <bits/stdc++.h>
using namespace std;

//To print N numbers using recursion

int nTimesReverse(int n){
    if(n > 0){
        // count++;
        cout << n << " ";
        n--;
        // cout << count << " ";
        nTimesReverse(n);
    }
    return 0;
}


// int count = 0;
// int nTimes(int n){
//     if(count <=n ){
//         count ++;
//         cout << count << " ";
//         nTimes(count);
//     }
//     return 0;
// }

int sumOfNnumbers(int n, int i){
    if(i>n) return 0;
    return i + sumOfNnumbers(n,i+1);
}

int nFactorial(int n){
    if(n == 1 || n == 0) return 1;
    return n*nFactorial(n-1);
}

string checkPalindrome(string s){
    // cout << char(tolower('A'));
    // cout << char(91);
    // for 0-9 ascii values 48-57
    // for A - Z 65 - 90
    // for a - z 97 - 122
    // char split[s.length()];
    string a;
    for(int i = 0; i<s.length();i++){
        if((tolower(s[i]) >= 97 && tolower(s[i]) <= 122)||(tolower(s[i]) >= 48 && tolower(s[i])<=57)){
            a += char(tolower(s[i]));
        }
    }

    string b;

    for(int i=a.length()-1;i>=0;i--){
        b += a[i];
    }

    // if(a == b) return true;
    return b;
}


int main(){
    // nTimesReverse(5);
    // nTimes(5);
    // int ans = sumOfNnumbers(10,1);
    // int ans = nFactorial(5);
    // cout << ans;
    cout << checkPalindrome("A man, A plan, a canal: Panama");
    // cout << checkPalindrome(" , / ");

    
}