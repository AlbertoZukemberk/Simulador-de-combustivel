#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Carro{
    public:
        int tank;
        int abastecer();
        void setTankMax(int tm);
        float distancia(float dist);

    private:
        int TankMax = 50;
        int KmL = 15;

};



float Carro::distancia(float dist){
    float distM;
    float gas, aux;

    distM = (KmL * tank);

    if (distM <= dist){
        aux = dist/KmL ;

        gas = tank - aux;

        cout << "O restante de gasolina foi: "<< gas << "\n";
        
        return (distM);
    
    }
    
    aux = dist/KmL ;

    gas = tank - aux;

    cout << dist << "\n" << KmL<< "\n"<< aux <<"\n";

    
    return(dist);
}

int Carro::abastecer(){
    int tank;
    
    cout << "Voce deseja Colocar quanto de gasolina: ";
    cin >> tank;
    
    return(tank);
}


int main(){
    float dist;
    
    Carro *c1 =new Carro;

    c1->tank = c1->abastecer();

    cout << "O carro pecorreu quantos KM: ";
    cin >> dist;

     int kilom = c1->distancia(dist);

    cout << "O carro pecorreu: " << kilom<< "\n";
    
    return 0;
}