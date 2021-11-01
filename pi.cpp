#include <iostream> //Input-Output Programme (schon vorhanden)
#include <cmath>    //Mathe funktionen
#include <unistd.h>

using namespace std;

int main(){
    double x = 0.0;
    double y = 0.0;
    int i = 0;
    double innerring = 0;
    int iterations = 100000000;

    while(i < iterations) {
            x = (1.0 * rand())/RAND_MAX; 
            y = (1.0 * rand())/RAND_MAX; 
            i += 1;
            
            if (x*x+y*y <= 1)
                innerring += 1;
            
    }       
        std::cout << innerring << "\n\r";
        double pi = (innerring/iterations)*4;
        std::cout << pi;

}
