#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_set<char> uset(s.begin(),s.end());
    int n = uset.size();

    if(n%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}