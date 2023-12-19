#include <iostream>

void TrocaNumeros(int* Num1, int* Num2);

int main()

{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "\nDigite o primeiro n�mero: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o segundo n�mero: ";
	std::cin >> Numero2;
	std::cout << "\nValores antes da troca:\n ";
	std::cout << "Endere�o de mem�ria de n�mero 1: " << &Numero1 << "\n";
	std::cout << "Endere�o de mem�ria de n�mero 2: " << &Numero2 << "\n";
	TrocaNumeros(&Numero1, &Numero2);
	std::cout << "\nValores depois da troca:\n ";
	std::cout << "Primeiro n�mero:\n " << Numero1 << "\n";
	std::cout << "Segundo n�mero:\n " << Numero2 << "\n";

	system("PAUSE");
	return 0;

}

void TrocaNumeros(int* Num1, int* Num2)
{
	std::cout << "\nEndere�o de mem�ria de Num1 da fun��o: " << &Num1 << "\n";
	std::cout << "\nEndere�o de mem�ria de Num2 da fun��o : " << &Num2 << "\n";
	std::cout << "\nEndere�o de mem�ria contido dentro de Num1: " << Num1 << "\n";
	std::cout << "\nEndere�o de mem�ria contido dentro de Num2: " << Num2 << "\n";
	int Temp{ *Num1 };
	*Num1 = *Num2;
	*Num2 = Temp;
}
