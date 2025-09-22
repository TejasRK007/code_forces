#include <iostream>
using namespace std;
int main(){
    int stops;
    cin>>stops;
    int exit,enter;
    int currentPassengers = 0;
    int maxPassengers = 0;
    for(int i = 0;i<stops;i++){
        cin>>exit>>enter;
        currentPassengers -= exit;
        currentPassengers += enter;
        
        
        if(currentPassengers>maxPassengers) maxPassengers = currentPassengers;
    }
    cout<<maxPassengers;
}