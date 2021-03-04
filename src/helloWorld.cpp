#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else return n * factorial(n-1);
}

int mystery(int n){
    if(n < 10){
        return 10 * n + n;
    } else{
        int a = mystery(n / 10);
        int b = mystery(n % 10);
        return 100 * a + b;
    }
}

bool isPalindrome(string s){
    if(s.length() <= 1){
        return true;
    }
    else{
        char firstChar = s[0];
        char lastChar = s[s.length()-1];
        string subString = s.substr(1, s.length()-2);
        return firstChar == lastChar && isPalindrome(subString);
    }
}

int main_mystery(){
    int inputs, ans;
    cout << "Please enter your test string:" << endl;
    cin >> inputs;
    ans = mystery(inputs);
    cout << ans << endl;
    return 0;
}

int main_isPalindrome(){
    string inputs;
    bool ans;
    cout << "Please enter your test string:" << endl;
    cin >> inputs;
    ans = isPalindrome(inputs);
    cout << ans << endl;
    return 0;
}

int main__(){
    vector< vector<int> > v(2, vector<int>(3, 0));
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3;j++){
            v[i][j] = i+j;
            cout << v[i][j];
        }
        cout << endl;
    }
}

// All parameters with default values must appear last in the list
