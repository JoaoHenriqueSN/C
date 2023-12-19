#include <iostream>
#include <cstddef>

int main()

{

	int Num1 = 7;
	int* Pont1 = &Num1;
	//Para declarar um ponteiro, é preciso indicar o tipo da varivael que ele vai apontar
	//e que ele vai apontar para o seu ENDEREÇO DE MEMÓRIA

	std::cout << "\nValor da variavel Num1: " << Num1;
	std::cout << "\nValor que o ponteiro esta apontando: " << Pont1;
	//Ele sempre vai entregar o endereço de memória nesse comando
	//O valor do endereço indicado sempre será do primeiro byte, 
	//nesse caso o primeiro dos 4 bytes
	
	std::cout << "\nValor armazenado da variavel que o ponteiro esta apontando: " << *Pont1;
	//Quando colocamos o "*" no ponteiro, ele indica o valor armazenado na variável

	*Pont1 = 30;
	std::cout << "\n" << *Pont1 << "\n";
	//Podemos mudar o valor da variável usando o ponteiro  

	int Var2 = 17;
	Pont1 = &Var2;
	std::cout << "\n" << *Pont1 << "\n";
	//Tambem podemos mudar a varivael que o ponteiro esta apontado

	int* Pont2;
	Pont2 = NULL;
	std::cout << "\n" << *Pont2 << "\n";

	//É possível usar ponteiros da forma decrita acima para criar eles sem apontar para 
	//nenhum lugar na memória. Só que para não gerar lixo na memória é preciso usar
	// a biblioteca: #include <cstddef>

	int* Pont3 = new int;
	*Pont3 = 77;
	std::cout << "\n" << *Pont3 << "\n";

	//Podemos criar ponteiros dessa forma também, porém esses valores só poderam ser 
	//acessados através desse ponteiro "*Pont3". Caso ele seja perdido, o espaço 
	//de memória que tinhamos também vai ser perdido 


	return 0;
	system("PAUSE");
}