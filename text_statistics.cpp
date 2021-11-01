#include <iostream> //Input-Output Programme (schon vorhanden)
#include <cmath>    //Mathe funktionen
#include <unistd.h>

using namespace std;

int main(){
    //definitions
    int array [94] = {}; ;
    string stats = "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000" //94 Stellen
    
    char c;
    
    cout<<"Text: \n";
    string x = "";
    cin>>x;
    for(char c : x) {
        string process = stats.substr((int)c, (int)c); // "0"
        int processing = stoi(process); // 0
        
    }
}
