#include <iostream>
//Crie um programa que:
    //Possua um vetor de 5 números inteiros
    //Peça ao usuário para digitar os valores
    //Exiba todos os valores digitados
int main(){
  int num[5];

  for (int i=0;i<5;i++){
    std::cout << "digite um numero: " << std::endl;
    std::cin >> num[i];
  }
  for(int i=0;i<5;i++){
    std::cout << num[i] << std::endl;
  }
}
