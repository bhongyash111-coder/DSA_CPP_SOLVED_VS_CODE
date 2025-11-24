#include<iostream>
#include<stack> 
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    stack<int>s;
    vector<int>arr={6,8,0,1,3};
    int n=arr.size();
for(int i = n - 1; i >= 0; i--) {
while(s.size()>0 && s.top() <=arr[i])
{
    s.pop();
}
if(s.empty()){
    cout<<-1<<" ";
}
else{
    cout<<s.top()<<" ";
}
for(int val: arr){
    cout<<val<<" "
;   }
}}