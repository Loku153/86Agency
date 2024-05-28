
#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int>& a, int n, int x) {
    unordered_map<int, int> mp; //hashmap
    bool res=false;
    for(int i=0;i<n;i++){ 
        int second_num=x-a[i];
        if(mp.find(second_num)!=mp.end()){
            res=true;
            break;
         }  
         mp[a[i]]=i; //insert key value pair in hashmap
       }
       return res;
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int x;
    cin>>x;
    if (twoSum(a,n,x))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}

