//prcisamos incluir o arquivo .h relativo a classe Conta
//para que este arquivo Conta.cpp possa "enxergar" as declarações da classe conta;
#include "Conta.h"
#include <iostream>
#include <string>

//Aqui o operador escopo:: está indicando que a função/
//Método sacar pertence a classe Conta e que este código
//a seguir vai implementar a função Sacar.

bool Conta::Sacar(double Valor)
{
	if (Saldo < Valor)
	{
		//Se o valor do saldo no Objeto for menor que o valor a ser sacado, ele não poderá sacar rsrsrs
		std::cout << "\nSaldo insuficiente!\n";
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";
		return false;
	}
	else
	{
		//se não ele poderá sacar
		//Temos que diminuir o saldo
		Saldo = Saldo - Valor;
		std::cout << "\nSeu saldo atual: R$" << ConsultarSaldo() << "\n";
		return true;
	}
}

void Conta::Depositar(double Valor)
{
	Saldo += Valor;
	std::cout << "Deposito de R$" << Valor << " realizado com sucesso.\n";
}


//A função recebe como argumentos para seus parâmetros um Objeto do tipo Conta e um Valor double
void Conta::Transferir(Conta Destino, double Valor)
{
	if (Saldo < Valor) 
	{
		std::cout << "\nSaldo Insuficiente\n";
	}
	else
	{
		//Aqui Destino está com o objeto "passado" para a função
		//Logo vai chamar o método Depositar desta função
		Destino.Depositar(Valor);
		//Depois de depositar você deve retirar este valor do saldo
		Saldo -= Valor;
		std::cout << "\n****Dados****\n";
		std::cout << "\nTitular: " << Destino.GetTitular() << "\n";
		std::cout << "\nBanco: " << Destino.GetBanco() << "\n";
		std::cout << "\nAgencia: " << Destino.GetAgencia() << "\n";
		std::cout << "\nConta: " << Destino.GetNumConta() << "\n";
		std::cout << "\nTranferencia realizada com sucesso.\n";
		std::cout << "\nSeu saldo atual: R$" << ConsultarSaldo() << "\n";



	}
}

double Conta::ConsultarSaldo()
{
	return Saldo;
}
std::string Conta::GetBanco()
{
	return Banco;
}
int Conta::GetAgencia()
{
	return Agencia;
}
std::string Conta::GetTitular()
{
	return Titular;
}
void Conta::SetBanco(std::string Banco)
{
	Banco = Banco;
}