#include <iostream>

int main() {

	int vetor[] = {1,23,-78,900,234};
	int* ptr;
	//ptr = vetor;
	ptr = &vetor[0];
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor [" << i << "] Endereço: " << &vetor[i] << "Valor: " << vetor[i] << "\n";
	}

	std::cout << "\n*** Enderecos com aritmetica de ponteiros ***\n";
	std::cout << "Valor contido em ptr " << ptr << "\n";
	std::cout << "(ptr + 0) END: " << (ptr + 0) << " Valor: " << *(ptr + 0) << "\n";
	std::cout << "(ptr + 1) END: " << (ptr + 1) << " Valor: " << *(ptr + 1) << "\n";
	std::cout << "(ptr + 2) END: " << (ptr + 2) << " Valor: " << *(ptr + 2) << "\n";
	std::cout << "(ptr + 3) END: " << (ptr + 3) << " Valor: " << *(ptr + 3) << "\n";
	std::cout << "(ptr + 4) END: " << (ptr + 4) << " Valor: " << *(ptr + 4) << "\n";
	std::cout << "Valor contido em ptr " << ptr << "\n";
	//obs: (ptr + 0) = ptr

	ptr = &vetor[3];
	ptr--;
	std::cout << "Valor do apontado por ptr: " << *ptr << "\n";

	ptr = vetor;
	//retorna o vetor para o valor inicial através de ptr

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] " << *(ptr + i) << "\n";
	}
	//podemos substituir *(ptr + 1) por ptr[i], é mais prático para percorrer o ponteiro

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] " << ptr[i] << "\n";
	}

	system("PAUSE");
	return 0;
}