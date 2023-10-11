#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void fearOfTheDark(){
    int Ox = 0, Oy = 0, Px, Py, Ax, Ay, Bx, By;
    cin >> Px >> Py >> Ax >> Ay >> Bx >> By;
    
    double AO = sqrt((Ax*Ax) + (Ay *Ay));
    double AP = sqrt(((Ax-Px)*(Ax-Px)) + ((Ay-Py) *(Ay-Py)));
    
    double BO = sqrt((Bx*Bx) + (By *By));
    double BP = sqrt(((Bx-Px)*(Bx-Px)) + ((By-Py) *(By-Py)));
    
    double Amax = max(AO, AP);
    double Bmax = max(BO, BP);
    
    double Amin = min(AO, AP);
    double Bmin = min(BO, BP);
    
    if((AO<BO) && (AP < BP)){
        cout << setprecision(11) << Amax << endl;
        return;
    }
    if((AO > BO) && (AP > BP)){
        cout << setprecision(11) << Bmax << endl;
        return;
    }
    
    double AB = sqrt(((Ax-Bx)*(Ax-Bx)) + ((Ay-By) *(Ay-By)));
    AB = AB/2;
    
    if(AB > Amax){
        cout << setprecision(11) << Amax << endl;
        return;
    }
    
    else if(AB > Bmax){
        cout << setprecision(11) << Bmax << endl;
        return;
    }
    else{
        double theMax = max(Amin, max(Bmin, AB));
        cout << setprecision(11) << theMax << endl;
        return;
    }
}

int main(){
    int t;
    cin >> t;
    
    for(int i = 0; i<t; i++){
        fearOfTheDark();
    }
    
    return 0;
}