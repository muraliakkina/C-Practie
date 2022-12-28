#include <cmath>
#include <corecrt.h>
#include <iomanip>
#include <iostream>
#include <limits>
#include <ostream>
#include <string>
#include <time.h>

using namespace std;

void pyramidStarStartFromMiddle(int n) {
  // Pattern
  //       *
  //     * * *
  //   * * * * *
  // * * * * * * *

  //
  char arr[(n * 2) - 1];
  char a = '*';
  int val = round(((n * 2) - 1) / 2);
  int c = 1;

  for (int i = 0; i < n; i++) {
    string ans = "";
    if (i == 0) {
      arr[val] = a;
    } else if (c + val <= (n * 2) - 1 && val - c >= 0) {
      arr[val + c] = a;
      arr[val - c] = a;
      c++;
    }

    for (int j = 0; j < (n * 2) - 1; j++) {
      if (arr[j] == '*') {
        ans = ans + arr[j];
      } else if (j <= val) {
        ans = ans + " ";
      }
    }
    cout << ans << endl;
  }
}

void pyramidStarRevereseStartEndingWithOne(int n) {
  int val = ((n * 2) - 1) / 2;
  string s = "";
  int b = 0;
  int e = (n * 2) - 2;
  for (int i = 0; i < (n * 2) - 1; i++) {
    s = s + "*";
  }

  for (int i = 0; i < n; i++) {
    if (i == 0) {
      cout << s << endl;
    } else if (b < val && e > val) {
      s[b] = ' ';
      s[e] = '\0';
      e--;
      b++;
      cout << s << endl;
    }
  }
}

void starPatternIncDec(int n) {

  for (int i = 0; i < n * 2; i++) {
    if (i < n) {
      for (int j = 0; j <= i; j++) {
        cout << "* ";
      }
    }

    if (i > n) {
      for (int k = i; k < (n * 2); k++) {
        cout << "* ";
      }
    }
    if (i != n) {
      cout << "\n";
    }
  }
}

void pattern11(int n) {
  // 1
  // 01
  // 101
  // 0101

  for (int i = 1; i < n + 1; i++) {
    if (i % 2 != 0) {
      for (int j = 0; j < i; j++) {
        if (j % 2 == 0) {
          cout << 1;
        } else {
          cout << 0;
        }
      }
    } 
    else {
      for (int j = 0; j < i; j++) {
        if (j % 2 != 0) {
          cout << 1;
        } else {
          cout << 0;
        }
      }
    }
    cout << endl;
  }
}

void pattern13(int n){
  int temp = 1;
  for(int i=1;i<n+1;i++){
    for(int j = 0;j<i;j++){
      cout << temp;
      cout << " "; 
      temp++;
    }
    cout << endl;
  }
}

void pattern14(int n){
  for(int i = int('A')+1;i<int('A')+1+n;i++){
    for(int j = int('A');j<i;j++){
      cout << char(j);
    }
    cout << endl;
  }
}

void pattern12(){
  
}

int main() {

  time_t start, end;

  // pyramidStarStartFromMiddle(10);

  // time(&start);
  // pyramidStarRevereseStartEndingWithOne(10);
  // time(&end);

  // double time_taken = double(end - start);
  // cout << "Time taken by program is : " << fixed << time_taken <<
  // setprecision(5); cout << " sec " << endl;

  // starPatternIncDec(5);/

  // pattern11(6);

  // pattern13(5);
  pattern14(5);
}
