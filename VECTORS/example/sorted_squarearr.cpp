#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


void sortedsquaredarray(vector<int>v){
    vector<int>ans;
    int left =0 ,right=v.size()-1;
    while(left<=right){
        if(abs(v[left])<abs(v[right])){
            ans.push_back(v[right]*v[right]);
            right--;
        }
        else{
            ans.push_back(v[left]*v[left]);
            left++;
        }
    }
    reverse(ans.begin(), ans.end());

    for(int i=0;i<ans.size();i++){
        cout<<ans[i] <<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    vector<int>m(n);
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    sortedsquaredarray(m);
    



}
/*#include <iostream>
#include <vector>
#include <algorithm>  // for reverse
using namespace std;

void sortedsquaredarray(vector<int> &v) {
    vector<int> ans;
    int left = 0, right = v.size() - 1;
    
    while (left <= right) {
        if (abs(v[left]) > abs(v[right])) {
            ans.push_back(v[left] * v[left]);
            left++;
        } else {
            ans.push_back(v[right] * v[right]);
            right--;
        }
    }

    // The result is in reverse order, so we reverse it
    reverse(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> m(n); // Resize vector to size n
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }

    sortedsquaredarray(m);

    return 0;
}

*/