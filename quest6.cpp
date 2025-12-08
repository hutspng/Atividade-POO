//Leia 8 números inteiros para dentro de um vetor e determine:
    //O maior valor e em qual posição ele está
    //O menor valor e em qual posição ele está

#include <iostream>

int main(){
  int nums[8] = {1,7,8,9,5,4,3,2};
  int maior = nums[0], posicao = 0 ;
  
  for (int i=1;i<8;i++){
    if (nums[i] > maior){
        maior = nums[i];
        posicao = i;
    }
  }

  std::cout << "Maior: " << maior << "\n";
  std::cout << "indice: " << posicao << "\n";
}
