//Crie um vetor de 6 nomes (strings).
    //O programa deve:
    //Ler os nomes
    //Perguntar um nome a ser buscado
    //Informar se ele existe no veto

#include <iostream>
#include <string>

int main(){
    std::string nomes[6] = {"jorge", "maria", "joao", "ana", "pedro", "lucia"};

    std::string nomeBuscado;
    std::cout << "Digite o nome a ser buscado: ";
    std::cin >> nomeBuscado;
    bool encontrado = false;
    for(int i=0;i<6;i++){
        if(nomes[i] == nomeBuscado){
            encontrado = true;
            break;
        }
    }
    
    if(encontrado){
        std::cout << "O nome " << nomeBuscado << " foi encontrado no vetor.\n";
    } else {
        std::cout << "O nome " << nomeBuscado << " não foi encontrado no vetor.\n";
    }
}
