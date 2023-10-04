#include <string>
#include <iostream>

using namespace std;
void fatorial(int valores []);
void converteGraus(int valor);

int main(){
    int valores[] = {3, 4, 5};
    fatorial(valores);

    converteGraus(32);

    return 0;
}


void fatorial(int valores []){
    for(int j = 0; j<3; j++){
        int soma =valores[j];
        for(int i = valores[j] -1; i > 0 ; i--){
                soma = soma * i;
        }
        cout <<"Resultado do fatorial de "<< valores[j] <<": " << soma << endl;
    }
}

void converteGraus(int valor){


    cout <<"Converte Graus "<< (1.8 * valor) + 32 << endl;


}