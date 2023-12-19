#include <iostream>
#include <cstddef>

int main()

{

	int Num1 = 7;
	int* Pont1 = &Num1;
	//Para declarar um ponteiro, � preciso indicar o tipo da varivael que ele vai apontar
	//e que ele vai apontar para o seu ENDERE�O DE MEM�RIA

	std::cout << "\nValor da variavel Num1: " << Num1;
	std::cout << "\nValor que o ponteiro esta apontando: " << Pont1;
	//Ele sempre vai entregar o endere�o de mem�ria nesse comando
	//O valor do endere�o indicado sempre ser� do primeiro byte, 
	//nesse caso o primeiro dos 4 bytes
	
	std::cout << "\nValor armazenado da variavel que o ponteiro esta apontando: " << *Pont1;
	//Quando colocamos o "*" no ponteiro, ele indica o valor armazenado na vari�vel

	*Pont1 = 30;
	std::cout << "\n" << *Pont1 << "\n";
	//Podemos mudar o valor da vari�vel usando o ponteiro  

	int Var2 = 17;
	Pont1 = &Var2;
	std::cout << "\n" << *Pont1 << "\n";
	//Tambem podemos mudar a varivael que o ponteiro esta apontado

	int* Pont2;
	Pont2 = NULL;
	std::cout << "\n" << *Pont2 << "\n";

	//� poss�vel usar ponteiros da forma decrita acima para criar eles sem apontar para 
	//nenhum lugar na mem�ria. S� que para n�o gerar lixo na mem�ria � preciso usar
	// a biblioteca: #include <cstddef>

	int* Pont3 = new int;
	*Pont3 = 77;
	std::cout << "\n" << *Pont3 << "\n";

	//Podemos criar ponteiros dessa forma tamb�m, por�m esses valores s� poderam ser 
	//acessados atrav�s desse ponteiro "*Pont3". Caso ele seja perdido, o espa�o 
	//de mem�ria que tinhamos tamb�m vai ser perdido 


	return 0;
	system("PAUSE");
}