#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std; 


string longestcommonprefix(vector<string> str){
    sort(str.begin(),str.end());
    string s1=str[0];
    string s2 = str[str.size()-1];
    string ans;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[i]){
            ans.push_back(s1[i]);
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number of Strings n :"<<endl;
    cin>>n;
    cout<<"Enter the Strings"<<endl;
    vector<string> str(n);
    for(int i =0;i<n;i++){
        cin>>str[i];
    }
    cout<<"longest common prefix is "<<longestcommonprefix(str);
}


// Sorting helps find the common prefix easily

// First (s1) and last (s2) string in sorted order will have the smallest common prefix.

// Comparing characters correctly (== instead of =)

// Stops as soon as characters don’t match.

// Using string ans; instead of vector<string> ans();

// Since we are storing a prefix, a string is sufficient.

// Fixed .pushback() to .push_back()

// Correct syntax for adding characters to a string.