#include <iostream>
#include <cmath>

using namespace std;


//08 Equação da forca magnetica atuante sobre uma particula
// fm = b * i * l * seno(angulo)

void particula(){
	cout << "Forca magnetica atuante sobre uma particula" << endl;
	string variavel = "z";
	float f=0, b=0, i=0, l=0, a;
		
	while( ((variavel) != "F" ) && ((variavel) != "f") && ( (variavel) != "b" ) && ((variavel) != "B") && ((variavel) != "I") && ((variavel) != "i" ) && ((variavel) != "L") && ((variavel) != "l") && ((variavel) != "A") && ((variavel) != "a") ){
		cout << "Escolha uma variável para calcular. f, b, i, l ou a(angulo)." << endl;
		cin >> variavel;
	}
	
	if( (variavel == "F") || (variavel == "f") ){
		cout << "Digite um valor para b: " ;
		cin >> b;
		cout << "Digite um valor para i: " ;
		cin >> i;
		cout << "Digite um valor para l: " ;
		cin >> l;
		cout << "Digite um valor para a: " ;
		cin >> a;
		
		a = a * M_PI / 180;//converter angulo para radianos para calculo do seno
		
		f = b * i * l * sin(a);
		
		cout << "O valor de f para\n b= " << b << ", e i= "<< i << ", e l=" << l <<" e a= " << a << " eh \n f= " << f << endl;
		
	}else if( (variavel == "B") || (variavel == "b") ){
		cout << "Digite um valor para f: " ;
		cin >> f;
		cout << "Digite um valor para i: " ;
		cin >> i;
		cout << "Digite um valor para l: " ;
		cin >> l;
		cout << "Digite um valor para a: " ;
		cin >> a;
		
		a = a * M_PI / 180;//converter angulo para radianos para calculo do seno
		
		b = f / (i * l * sin(a));
		
		cout << "O valor de b para\n f= " << f << ", e i= "<< i << ", e l=" << l <<" e a= " << a << " eh \n b= " << b << endl;
	}else if( (variavel == "I") || (variavel == "i") ){
		cout << "Digite um valor para b: " ;
		cin >> b;
		cout << "Digite um valor para f: " ;
		cin >> f;
		cout << "Digite um valor para l: " ;
		cin >> l;
		cout << "Digite um valor para a: " ;
		cin >> a;
		
		a = a * M_PI / 180;//converter angulo para radianos para calculo do seno
		
		i = f / (b * l * sin(a));
		
		cout << "O valor de i para\n b= " << b << ", f= "<< f << ", e l=" << l <<" e a= " << a << " eh \n i= " << i << endl;
		
	}else if( (variavel == "L") || (variavel == "l") ){
		cout << "Digite um valor para b: " ;
		cin >> b;
		cout << "Digite um valor para i: " ;
		cin >> i;
		cout << "Digite um valor para f: " ;
		cin >> f;
		cout << "Digite um valor para a: " ;
		cin >> a;
		
		a = a * M_PI / 180;//converter angulo para radianos para calculo do seno
		
		l = f / (b * i * sin(a));
		
		cout << "O valor de l para\n b= " << b << ", e i= "<< i << ", e f=" << f <<" e a= " << a << " eh \n l= " << l << endl;
		
	}else{
		cout << "Digite um valor para b: " ;
		cin >> b;
		cout << "Digite um valor para i: " ;
		cin >> i;
		cout << "Digite um valor para l: " ;
		cin >> l;
		cout << "Digite um valor para f: " ;
		cin >> f;
		
		a = asin( f / ( b * i * l ) );
		a = (a * 180) / M_PI;
		
		cout << "O valor de a para\n b= " << b << ", e i= "<< i << ", e l=" << l <<" e f= " << f << " eh \n a= " << a << endl;
	}
}
