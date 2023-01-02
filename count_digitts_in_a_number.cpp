#include <bits/stdc++.h>

using namespace std;

void count_digits(int n)
{
    string s = to_string(n);
    cout << s.length();
}

void evenly_divide(int n){
    int count = 0;
    string s = to_string(n);
    int x = n;
    for(int i = 0;i<s.length() ;i++){
        // x = x%10;
        // if(n%x == 0){
        //     count++;
        // }
        cout << x;
    }
    // cout << count << endl;
}


int main()
{
    // count_digits(5534);
    evenly_divide(12);
}