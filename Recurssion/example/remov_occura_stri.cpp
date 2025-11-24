#include <iostream>
using namespace std;

string removeocc(string &s, int idx, int n){
    if(idx==n)  return "";
    string curr="";
    curr+=s[idx];

    return((s[idx] == 'a') ?"":curr) + removeocc(s,idx+1,n);
}

int main(){
    string s = "abcax";
    int n=s.length();
    cout<<removeocc(s,0,n);
    return 0;
}