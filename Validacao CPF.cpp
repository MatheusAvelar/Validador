#include <iostream>
using namespace std;
int main(){
	
    int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dig10, dig11, num1, num2, mult1, mult2, resto1, resto2;

    cout<<"Primeiro digito: ";
	cin>>dig1;
    cout<<"Segundo digito: ";
	cin>>dig2;    
    cout<<"Terceiro digito: ";
	cin>>dig3;    
    cout<<"Quarto digito: ";
	cin>>dig4;
	cout<<"Quinto digito: ";
	cin>>dig5;
	cout<<"Sexto digito: ";
	cin>>dig6;
	cout<<"Setimo digito: ";
	cin>>dig7;
	cout<<"Oitavo digito: ";
	cin>>dig8;
	cout<<"Nono digito: ";
	cin>>dig9;
	cout<<"Decimo digito: ";
	cin>>dig10;
	cout<<"Decimo Primeiro digito: ";
	cin>>dig11;
	
	//Conta para o Decimo Digito	
	mult1 = dig1*10+dig2*9+dig3*8+dig4*7+dig5*6+dig6*5+dig7*4+dig8*3+dig9*2;
	resto1 = mult1%11;
	if(resto1>=2)
		num1=11-resto1;
	else{	
		num1=0;
	}
	//Conta para o Decimo Primeiro Digito
	mult2 = dig1*11+dig2*10+dig3*9+dig4*8+dig5*7+dig6*6+dig7*5+dig8*4+dig9*3+num1*2;
	resto2 = mult2%11;
	if(resto2>=2)
		num2=11-resto2;
	else{	
		num2=0;
	}	
	if(dig10==num1)
		if(dig11==num2)
		cout<<"\tCPF VALIDO";
		else{
		cout<<"\tCPF INVALIDO";
		}
	else{
		cout<<"\tCPF INVALIDO";
	}
	/*cout<<"\t\nVerificacao"<<endl;
	cout<<"Resto 1: "<<resto1<<endl;
	cout<<"Resto 2: "<<resto2<<endl;
	cout<<"Num 1: "<<num1<<endl;	
	cout<<"Num 2: "<<num2<<endl;
	cout<<"Multiplicacao 1: "<<mult1<<endl;
	cout<<"Multiplicacao 2: "<<mult2<<endl;*/
	
	system("PAUSE>>null");
    return 0;

}
