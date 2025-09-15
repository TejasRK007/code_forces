#include <iostream>
using namespace std;
int main(){
    string x,y;
    cin>>x>>y;
    for(char &c : x)
    c = tolower(c);

    for(char &d : y)
    d = tolower(d);
    if(x<y) cout<<-1;
    else if(x>y) cout<<1;
    else cout<<0;
}