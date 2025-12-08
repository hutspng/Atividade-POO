//Crie um vetor com 10 números digitados pelo usuário.
    //Depois peça um número X e informe:
   // Se X está no vetor
    //Em qual posição ele aparece pela primeira vez

#include <iostream>

int main(){
    int nums[10];
    int x, posicao = -1; // -1 pra caso o numro não for encontrado

    std::cout << "Digite 10 números:\n";
    for(int i=0;i<10;i++){
        std::cin >> nums[i];
    }
    std::cout << "agora digite um número X: ";
    std::cin >> x;

    for(int i=0;i<10;i++){
        if(nums[i] == x){
            posicao = i;
            break;
        }
    }

    if(posicao != -1){
        std::cout << "O número " << x << " está no vetor, na posição " << posicao << ".\n";
    } else {
        std::cout << "O número " << x << " não está no vetor.\n";
    }

}
