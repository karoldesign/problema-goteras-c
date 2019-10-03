// Problema <216> <goteras>
//
// https://www.aceptaelreto.com
//
// <Carolina Chamorro Saldaña>
//---------------------------------------------------------

#include <iostream>
using namespace std;

void casoDePrueba() {
    int seconds, hours, min, sec;
    cin >> seconds;
    
    hours = seconds / 3600;
    min = ((seconds - hours*3600)/60);
    sec = seconds % 60;
    
    printf("%02d:%02d:%02d\n", hours, min, sec);
    
} // casoDePrueba

//---------------------------------------------------------

int main() {
    
    unsigned int numCasos, i;
    
    cin >> numCasos;
    for (i = 0; i < numCasos; ++i) {
        casoDePrueba();
    }
    return 0;
    
} // main
