#include <iostream>
#include <cmath>

using namespace std;

void caos(){
	cout << "Teoria do Caos" << endl;
	string variavel = "z";
	float X=0, x=0, k=0;
	
	while( ((variavel) != "X" ) && ((variavel) != "x") && ( (variavel) != "K" ) && ((variavel) != "k") ){
		cout << "Escolha uma variavel para calcular. Xnew, Xold ou k." << endl;
		cin >> variavel;
	}
	
	if(variavel == "X"){
		cout << "Digite um valor para k: " ;
		cin >> k;
		cout << "Digite um valor para x old: " ;
		cin >> x;
		
		X = k * x * (1 - x);
		
		cout << "O valor de X para\n k= " << k <<", e x= " << x <<" eh \n X= " << X << endl;
		
	} else if( (variavel == "K") || (variavel == "k") ){
		cout << "Digite um valor para X new: " ;
		cin >> X;
		do{
			cout << "Digite um valor(exceto 1 ou 0) para x old: " ;
			cin >> x;
		}while( (x==0) || (x==1));	
			
		k = X / ( x * (1 - x) );
		
		cout << "O valor de k para\n X= " << X <<", x= " << x <<" eh \n k= " << k << endl;
		
	}else {
		cout << "Digite um valor para k: " ;
		cin >> k;
		cout << "Digite um valor para X new: " ;
		cin >> X;
		
		float delta, old1, old2;
		
		//equacao do segundo grau
		//old^2 - old + new/k = 0
		//coeficientes a=1 
		//b=-1 
		//e c=xnew/k
		
		delta = 1 - (4 * 1 * X);
		
		if(delta < 0){
			cout << "Nao existe solucao real para k= " << k << " e X new = " << X << "."<< endl;
		}else{
			old1 = ( 1 + sqrt(delta) ) / (2);
			old2 = ( 1 - sqrt(delta) ) / (2);
			cout << "X old = " << old1 << endl << " ou " << endl << "X old = " << old2;
		}
	}
	
}
