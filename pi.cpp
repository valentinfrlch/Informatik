#include <iostream> //Input-Output Programme (schon vorhanden)
#include <cmath>    //Mathe funktionen
#include <unistd.h>

using namespace std;

int main(){
    double x = 0.0;
    double y = 0.0;
    int i = 0;
    double innerring = 0;

    while(i < 100000000) {
            x = (1.0 * rand())/RAND_MAX; 
            y = (1.0 * rand())/RAND_MAX; 
            i += 1;
            
            if (x*x+y*y <= 1)
                innerring += 1;
            
    }       
        std::cout << innerring << "\n\r";
        double pi = (innerring/100000000)*4;
        std::cout << pi;
}
