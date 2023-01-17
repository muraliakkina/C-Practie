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


int main(){
    // nTimesReverse(5);
    // nTimes(5);
    int ans = sumOfNnumbers(10,1);
    // int ans = nFactorial(5);
    cout << ans;

    
}