//Usando o vetor do exercício anterior, calcule e exiba:
   // A soma total dos números
   // A média aritmética dos valores

#include <iostream>

int main() {
  int num[5], soma;

  for (int i = 0; i < 5; i++) {
    std::cout << "Digite o numero para a posicao " << i << ": "; 
    std::cin >> num[i];
  }

  for (int i = 0; i < 5; i++) {
    std::cout << "Posicao " << i << ": " << num[i] << std::endl;
  }

  for (int i=0;i<5;i++){
    soma += num[i];
  }

  std::cout << "soma: " << soma << std::endl;
  
    return 0;
}
