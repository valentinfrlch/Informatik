#include <iostream> //Input-Output Programme (schon vorhanden)
#include <random>    //Mathe funktionen
#include <unistd.h>

using namespace std;

int main(){
    double x = 0.0;
    double y = 0.0;
    int i = 0;
    double innerring = 0;
    int iterations = 1000000000;
    random_device rnd;
    mt19937 gen(rnd());
    
    uniform_real_distribution<> dist(0.0, 1.0);

    while(i < iterations) {
            x = dist(gen); 
            y = dist(gen);  
            i += 1;
            
            if (x*x+y*y <= 1)
                innerring += 1;
            
    }       
        std::cout << innerring << "\n\r";
        double pi = (innerring/iterations)*4;
        std::cout << pi;

}
