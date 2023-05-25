#include <iostream>

using namespace std;

int main(){

    int Npedras, Nsapos, vetpedras[101] = {};
    cin >> Npedras >> Nsapos;

    int posinicial,distanciapulo;

    while(Nsapos--){

        cin >> posinicial >> distanciapulo;
        //Incremento a variável iteratota i de acordo com a distancia do pulo do sapo.
        for(int i = posinicial; i <= Npedras; i += distanciapulo){
            //A posição no vetor que corresponde com a distância do pulo do sapo, recebe 1. 
            vetpedras[i] = 1;
        }
        //Decremento a variável iteratota i de acordo com a distancia do pulo do sapo.
        for(int i = posinicial; i >= 0; i -= distanciapulo){
        //A posição no vetor que corresponde com a distância do pulo do sapo, recebe 1. 
            vetpedras[i] = 1;
        }
          
    }
    //Imprimo o vetor com o resultado.
    for(int i = 1; i <= Npedras; i++){
        cout << vetpedras[i] << endl;
    }

    return 0;
}