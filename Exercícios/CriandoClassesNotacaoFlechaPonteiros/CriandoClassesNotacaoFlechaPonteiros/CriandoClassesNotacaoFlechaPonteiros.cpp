#include <iostream>

class Casa
{
private:
	int NumQuartos{4};
	float Tamanho{ 90.0 };
	bool bTemSuite{ true };

public:
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);
};

int main()
{
	/*Casa CasaDePraia;
	CasaDePraia.MostrarTamanho();
	CasaDePraia.SetNumQuartos(6);*/
	Casa* CasaDePraia = new Casa();
	//Agora eu estou criando, instanciando um objeto via alocação dinâmica de memória, utilizando ponteiros. Ou seja, será croadp um objeto baseado na classe Casa e o endereço de memória deste objeto será colocado em CasaDePraia
	(*CasaDePraia).ObtenhaNumeroDeQuartos();
	//Um atalho para fazer notação ponto. é usar a notação flecha> Ela pode ser usada da seguinte forma:
	CasaDePraia->SetNumQuartos(5);
	std::cout << "\n Numero de Quartos: " << CasaDePraia->ObtenhaNumeroDeQuartos();
	std::cout << "\n Tem suite? ";
	CasaDePraia->TemSuite() ? std::cout << "Sim" : std::cout << "Não" << "\n";
	std::cout << "\n";
	system("PAUSE");
	return 0;
}

void Casa::MostrarTamanho()
{
	std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	return bTemSuite;
}

void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{
		NumQuartos = Num;
	}
	else
	{
		std::cout << "\nNumero de quartos invalidos\n";
	}
}
