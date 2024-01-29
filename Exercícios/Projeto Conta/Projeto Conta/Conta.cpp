//prcisamos incluir o arquivo .h relativo a classe Conta
//para que este arquivo Conta.cpp possa "enxergar" as declara��es da classe conta;
#include "conta.h"
#include <iostream>
#include <string>

//Aqui o operador escopo:: est� indicando que a fun��o/
//M�todo sacar pertence a classe Conta e que este c�digo
//a seguir vai implementar a fun��o Sacar.

bool Conta::Sacar(double Valor)
{
	if (Saldo < Valor)
	{
		//Se o valor do saldo no Objeto for menor que o valor a ser sacado, ele n�o poder� sacar rsrsrs
		std::cout << "\nSaldo insuficiente!\n";
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";
		return false;
	}
	else
	{
		//se n�o ele poder� sacar
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


//A fun��o recebe como argumentos para seus par�metros um Objeto do tipo Conta e um Valor double

//Aqui o par�metro Destino ir� receber este objeto
void Conta::Transferir(Conta &Destino, double Valor)
{
	if (Saldo < Valor) 
	{
		std::cout << "\nSaldo Insuficiente\n";
	}
	else
	{
		//Aqui Destino est� com o objeto "passado" para a fun��o
		//Logo vai chamar o m�todo Depositar desta fun��o
		Destino.Depositar(Valor);
		//Depois de depositar voc� deve retirar este valor do saldo
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
int Conta::GetNumConta()
{
	return NumConta;
}
std::string Conta::GetTitular()
{
	return Titular;
}
void Conta::GetEnderecoThis()
{
	std::cout << "this contem dentro do endereco " << this << "\n";
}
void Conta::SetBanco(std::string Banco)
{
	//This � um ponteiro para chegar no apontado pelo ponteiro 
	//Temos *this, ,mas como this � um ponteiro para um objeto 
	// ele precisa usar a nota��o ponto. para cessar atributos 
	//e executar fun��o do objeto

	//agora o compilador sabe que Banco � a vari�vel local que recebeu
	//o argumento string e que deve ser colocada no atributo Banco do
	//objeto apontado por this
	//(*this).Banco
	this->Banco = Banco;
}

void Conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void Conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}

void Conta::SetTitular(std::string Titular)
{
	this->Titular = Titular;
}