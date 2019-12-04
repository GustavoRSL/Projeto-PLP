#include <iostream>
#include <cmath>

using namespace std;


//05 Equação de Clapeyron
// p * V = R * n * T


void clapeyron(){
	cout << "Clapeyron" << endl;
	string variavel = "z";
	float p=0, v=0, n=0, r=0, t=1;
	
	while( ((variavel) != "p" ) && ((variavel) != "v") && ( (variavel) != "n" ) && ((variavel) != "r") && ((variavel) != "t") && ((variavel) != "P" ) && ((variavel) != "V") && ( (variavel) != "N" ) && ((variavel) != "R") && ((variavel) != "T")){
		cout << "Escolha uma variável para calcular. p, v , n, r ou t." << endl;
		cin >> variavel;
	}
	
	if( (variavel == "P") || (variavel == "p") ){//oooooooooooooooooooooooooooooooooooooooooooooooo
		cout << "Digite um valor para v: " ;
		cin >> v;
		cout << "Digite um valor para n: " ;
		cin >> n;
		cout << "Digite um valor para r: " ;
		cin >> r;
		cout << "Digite um valor para t: " ;
		cin >> t;
		
		p = (n * r * t )/ v;
		
		cout << "O valor de p para\n n= " << n <<", r= " << r <<", t= " << t <<" e v= " << v << " eh \n p= " << p << endl;
		
	}else if( (variavel == "V") || (variavel == "v") ){ //ooooooooooooooooooooooooooooooooooooooooooo
		cout << "Digite um valor para p: " ;
		cin >> p;
		cout << "Digite um valor para n: " ;
		cin >> n;
		cout << "Digite um valor para r: " ;
		cin >> r;
		cout << "Digite um valor para t: " ;
		cin >> t;
		
		v = (n * r * t )/ p;
		
		cout << "O valor de v para\n n= " << n <<", r= " << r <<", t= " << t <<" e p= " << p << " eh \n v= " << v << endl;
		
	}else if( (variavel == "N") || (variavel == "n") ){ //ooooooooooooooooooooooooooooooooooooooo
		cout << "Digite um valor para p: " ;
		cin >> p;
		cout << "Digite um valor para v: " ;
		cin >> v;
		cout << "Digite um valor para r: " ;
		cin >> r;
		cout << "Digite um valor para t: " ;
		cin >> t;
		
		n = (p * v) / (r * t);
		
		cout << "O valor de n para\n p= " << p <<", r= " << r <<", t= " << t <<" e v= " << v << " eh \n n= " << n << endl;
		
	}else if( (variavel == "R") || (variavel == "r") ){
		cout << "Digite um valor para v: " ;
		cin >> v;
		cout << "Digite um valor para n: " ;
		cin >> n;
		cout << "Digite um valor para r: " ;
		cin >> r;
		cout << "Digite um valor para p: " ;
		cin >> p;
		
		r = (p * v) / (n * t);
		
		cout << "O valor de p para\n n= " << n <<", r= " << r <<", t= " << t <<" e v= " << v << " eh \n p= " << p << endl;
		
	}else { // ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
		
		cout << "Digite um valor para v: " ;
		cin >> v;
		cout << "Digite um valor para n: " ;
		cin >> n;
		cout << "Digite um valor para r: " ;
		cin >> r;
		cout << "Digite um valor para p: " ;
		cin >> p;
		
		t = (p * v) / (n * r);
		
		
		cout << "O valor de t para\n n= " << n <<", r= " << r <<", p= " << p <<" e v= " << v << " eh \n t= " << t << endl;
	}
}
