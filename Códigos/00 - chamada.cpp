#include <iostream>
#include <cmath>

//incluir endereco dos arquivos de cada funcao abaixo
#include <01 - Pitágoras.cpp> 
#include <04 - Caos.cpp>


using namespace std;

//01 Equação Pitágoras
// a^2 + b^2 = c^2
void pitagoras(){
	cout << "Pitagoras" << endl;
	string variavel = "z";
	float a, b, c;
	
	while( ((variavel) != "a" ) && ( (variavel) != "b" ) && ((variavel) != "c") ){
		cout << "Escolha uma variável para calcular. a, b ou c." << endl;
		cin >> variavel;
	}
	
	if(variavel == "a"){
		cout << "Digite um valor para b: ";
		cin >> b;
		cout << "Digite um valor para c: ";
		cin >> c;
		
		if(c < b){
			cout << "Para b= " << b << " e c= " << c << ". Nao existe valor real para a variavel a" << endl;
		}else {
			a = sqrt( pow(c , 2) - pow(b, 2) );
			cout << "O valor da variavel a eh: " << a << endl;
		}
	} else if(variavel == "b"){
		cout << "Digite um valor para a: ";
		cin >> a;
		cout << "Digite um valor para c: ";
		cin >> c;
		
		if(c < a){
			cout << "Para a= " << a << " e c= " << c << ". Nao existe valor real para a variavel b" << endl;
		}else {
			b = sqrt( pow(c , 2) - pow(a, 2) );
			cout << "O valor da variavel b eh: " << b << endl;
		}
		
	}else {
		cout << "Digite um valor para a: ";
		cin >> a;
		cout << "Digite um valor para b: ";
		cin >> b;
		
		c = sqrt( pow(a , 2) + pow(b, 2) );
		cout << "O valor da variavel b eh: " << b << endl;
	}
	
}



//02 Equação da Lei da Gravidade
// F = G * m1 * m2 / d^2


void gravidade(){
	cout << "Gravidade" << endl;
	string variavel = "z";
	float F=0, G=0, m1=0, m2=0, d=1;
	
	while( ((variavel) != "F" ) && ((variavel) != "f") && ( (variavel) != "G" ) && ((variavel) != "g") && ((variavel) != "m1") && ((variavel) != "m2") && ((variavel) != "d")){
		cout << "Escolha uma variável para calcular. F, G , m1, m2 ou d." << endl;
		cin >> variavel;
	}
	
	if( (variavel == "F") || (variavel == "f") ){
		cout << "Digite um valor para G: " ;
		cin >> G;
		cout << "Digite um valor para m1: " ;
		cin >> m1;
		cout << "Digite um valor para m2: " ;
		cin >> m2;
		do{
			cout << "Digite um valor positivo para d: " ;
			cin >> d;
		}while(d <=0);
		
		F = G * m1* m2 / d;
		
		cout << "O valor de F para\n G= " << G <<", m1= " << m1 <<", m2= " << m2 <<" e d= " << d << "eh \n F= " << F << endl;
		
	}else if( (variavel == "G") || (variavel == "g") ){
		cout << "Digite um valor para F: " ;
		cin >> F;
		cout << "Digite um valor para m1: " ;
		cin >> m1;
		cout << "Digite um valor para m2: " ;
		cin >> m2;
		do{
			cout << "Digite um valor positivo para d: " ;
			cin >> d;
		}while(d <=0);
		
		G = (F * d * d)/(m1*m2);
		
		cout << "O valor de G para\n F= " << F <<", m1= " << m1 <<", m2= " << m2 <<" e d= " << d << "eh \n G= " << G << endl;
	}else if( (variavel == "m1") || (variavel == "M1") ){
		cout << "Digite um valor para F: " ;
		cin >> F;
		cout << "Digite um valor para G: " ;
		cin >> G;
		cout << "Digite um valor para m2: " ;
		cin >> m2;
		do{
			cout << "Digite um valor positivo para d: " ;
			cin >> d;
		}while(d <=0);
		
		
		m1 = (F * d * d)/(G * m2);
		
		cout << "O valor de m1 para\n F= " << F <<", G= " << G <<", m2= " << m2 <<" e d= " << d << "eh \n m1= " << m1 << endl;
		
	}else if( (variavel == "m2") || (variavel == "M2") ){
		cout << "Digite um valor para F: " ;
		cin >> F;
		cout << "Digite um valor para G: " ;
		cin >> G;
		cout << "Digite um valor para m1: " ;
		cin >> m1;
		do{
			cout << "Digite um valor positivo para d: " ;
			cin >> d;
		}while(d <=0);
		
		
		m2 = (F * d * d)/(G * m1);
		
		cout << "O valor de m2 para\n F= " << F <<", G= " << G <<", m1= " << m1 <<" e d= " << d << "eh \n m2= " << m2 << endl;
		
	}else if( (variavel == "D") || (variavel == "d") ){
		cout << "Digite um valor para F: " ;
		cin >> F;
		cout << "Digite um valor para G: " ;
		cin >> G;
		cout << "Digite um valor para m1: " ;
		cin >> m1;
		cout << "Digite um valor para m2: " ;
		cin >> m2;
		
		d = sqrt( G * m1 * m2 / F );
		
		cout << "O valor de G para\n F= " << F <<", m1= " << m1 <<", m2= " << m2 <<" e d= " << d << "eh \n G= " << G << endl;
	}
	
}



//03 Equação Da Teoria da Relatividade
// E = m * c^2
//os valores dessa equacao devem sempre ser positivos para E, m e c

void relatividade(){
	cout << "Relatividade" << endl;

	string variavel = "z";

	float E=0, m=0, c=0;
	
	while( ((variavel) != "E" ) && ((variavel) != "e") && ( (variavel) != "M" ) && ((variavel) != "m") && ((variavel) != "C") && ((variavel) != "c") ){
		cout << "Escolha uma variável para calcular. E, m ou c." << endl;
		cin >> variavel;
	}
	
	if( (variavel == "E") || (variavel == "e") ){
		cout << "Digite um valor para m: " ;
		cin >> m;
		cout << "Digite um valor para c: " ;
		cin >> c;
		
		E = m * c * c;
		
		cout << "O valor de E para\n m= " << m <<"e c= " << c << "eh \n E= " << E << endl;
		
	}else if( (variavel == "M") || (variavel == "m") ){
		cout << "Digite um valor para E: " ;
		cin >> E;
		cout << "Digite um valor para c: " ;
		cin >> c;
		
		m = E / c / c; 
		
		cout << "O valor de m para\n E= " << E <<"e c= " << c << "eh \n m= " << m << endl;
		
	}else{
		cout << "Digite um valor para E: " ;
		cin >> E;
		cout << "Digite um valor para m: " ;
		cin >> m;
		
		c = sqrt( E / m );
		
		cout << "O valor de c para\n E= " << E <<"e m= " << m << "eh \n c= " << c << endl;
	}
	
}




//04 Equação da Teoria do Caos
// X = k * x * (1 - t)

void caos(){
	cout << "Teoria do Caos" << endl;
	string variavel = "z";
	float X=0, x=0, k=0, t=0;
	
	while( ((variavel) != "X" ) && ((variavel) != "x") && ( (variavel) != "K" ) && ((variavel) != "k") && ((variavel) != "T") && ((variavel) != "t") ){
		cout << "Escolha uma variável para calcular. X, x, k ou t." << endl;
		cin >> variavel;
	}
	
	if(variavel == "X"){
		cout << "Digite um valor para k: " ;
		cin >> k;
		cout << "Digite um valor para x: " ;
		cin >> x;
		cout << "Digite um valor para t: " ;
		cin >> t;
		
		X = k * x * (1 - t);
		
		cout << "O valor de X para\n k= " << k <<", x= " << x << "e t= " << t <<"eh \n X= " << X << endl;
		
	}else if( (variavel == "K") || (variavel == "k") ){
		cout << "Digite um valor para X: " ;
		cin >> X;
		cout << "Digite um valor para x: " ;
		cin >> x;
		cout << "Digite um valor para t: " ;
		cin >> t;
		
		k = X / ( x * (1 - t) );
		
		cout << "O valor de k para\n X= " << X <<", x= " << x << "e t= " << t <<"eh \n k= " << k << endl;
		
	}else (variavel == "x"){
		cout << "Digite um valor para k: " ;
		cin >> k;
		cout << "Digite um valor para X: " ;
		cin >> X;
		cout << "Digite um valor para t: " ;
		cin >> t;
		
		x = X / ( k * (1 - t));
		
		cout << "O valor de x para\n k= " << k <<", X= " << X << "e t= " << t <<"eh \n x= " << x << endl;
		
	}else {
		cout << "Digite um valor para k: " ;
		cin >> k;
		cout << "Digite um valor para X: " ;
		cin >> X;
		cout << "Digite um valor para x: " ;
		cin >> x;
		
		 t = 1 + ( X / ( k * x) );
		
		cout << "O valor de t para\n k= " << k <<", X= " << X << "e x= " << x <<"eh \n t= " << t << endl;
	}
	
}



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



//06 Equação de Torricelli
// v^2 = v0^2 + 2 * a * s

void torricelli(){
	cout << "Torricelli" << endl;
	string variavel = "z";
	float v0=0, v=0, a=0, s=0;
	
	while( ((variavel) != "V0" ) && ((variavel) != "v0") && ( (variavel) != "V" ) && ((variavel) != "v") && ((variavel) != "A") && ((variavel) != "a" ) && ((variavel) != "S") && ( (variavel) != "s" ) ){
		cout << "Escolha uma variável para calcular. v, v0 , a ou s." << endl;
		cin >> variavel;
	}
	
	if( (variavel == "V") || (variavel == "v") ){
		cout << "Digite um valor para v0: " ;
		cin >> v0;
		cout << "Digite um valor para a: " ;
		cin >> a;
		cout << "Digite um valor para s: " ;
		cin >> s;
		
		v = sqrt( pow(v0, 2) + 2 * a * s);
		
		cout << "O valor de v para\n v0= " << v0 <<", a= " << a <<" e s= " << s << " eh \n v= " << v << endl;
		
	}else if( (variavel == "V0") || (variavel == "v0") ){
		cout << "Digite um valor para v: " ;
		cin >> v;
		cout << "Digite um valor para a: " ;
		cin >> a;
		cout << "Digite um valor para s: " ;
		cin >> s;
		
		v0 = sqrt( pow(v, 2) - 2 * a * s);
		
		cout << "O valor de v0 para\n v= " << v <<", a= " << a <<" e s= " << s << " eh \n v0= " << v0 << endl;
		
	}else if( (variavel == "A") || (variavel == "a") ){
		cout << "Digite um valor para v0: " ;
		cin >> v0;
		cout << "Digite um valor para v: " ;
		cin >> v;
		cout << "Digite um valor para s: " ;
		cin >> s;
		
		a = ( pow(v, 2) - pow(v0, 2) ) / (2 * s);
		
		
		cout << "O valor de a para\n v0= " << v0 <<", v= " << v <<" e s= " << s << " eh \n a= " << a << endl;
		
	}else {
		cout << "Digite um valor para v0: " ;
		cin >> v0;
		cout << "Digite um valor para a: " ;
		cin >> a;
		cout << "Digite um valor para v: " ;
		cin >> v;
		
		s = ( pow(v, 2) - pow(v0, 2) ) / (2 * a);
		
		cout << "O valor de s para\n v0= " << v0 <<", a= " << a <<" e v= " << v << " eh \n s= " << s << endl;
		
	}
}



//07 Equação de Gauss
// (1/f) = (1/p1) + (1/p2)

void gauss(){
	cout << "Gauss" << endl;
	string variavel = "z";
	float f=0, p1=0, p2=0;
	
	while( ((variavel) != "F" ) && ((variavel) != "f") && ( (variavel) != "p1" ) && ((variavel) != "P1") && ((variavel) != "P2") && ((variavel) != "p2" ) ){
		cout << "Escolha uma variável para calcular. f, p1 ou p2." << endl;
		cin >> variavel;
	}
	
	if( (variavel == "F") || (variavel == "f") ){
		cout << "Digite um valor para p1: " ;
		cin >> p1;
		cout << "Digite um valor para p2: " ;
		cin >> p2;
		
		f = (p1 * p2) / (p1 + p2);
		
		cout << "O valor de f para\n p1= " << p1 <<" e p2= " << p2 << " eh \n f= " << f << endl;
		
	}else if( (variavel == "P1") || (variavel == "p1") ){
		cout << "Digite um valor para f: " ;
		cin >> f;
		cout << "Digite um valor para p2: " ;
		cin >> p2;
		
		p1 = (p2 * f) / (p2 - f);
		
		cout << "O valor de p1 para\n f= " << f <<" e p2= " << p2 << " eh \n p1= " << p1 << endl;
		
	}else{
		cout << "Digite um valor para p1: " ;
		cin >> p1;
		cout << "Digite um valor para f: " ;
		cin >> f;
		
		p2 = (p1 * f) / (p1 - f);
		
		cout << "O valor de p2 para\n p1= " << p1 <<" e f= " << f << " eh \n p2= " << p2 << endl;
	}
}



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
		
		a = a * 3.1415926535897 / 180;//converter angulo para radianos para calculo do seno
		
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
		
		a = a * 3.1415926535897 / 180;//converter angulo para radianos para calculo do seno
		
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
		
		a = a * 3.1415926535897 / 180;//converter angulo para radianos para calculo do seno
		
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
		
		a = a * 3.1415926535897 / 180;//converter angulo para radianos para calculo do seno
		
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
		a = (a * 180) / 3.1415926535897;
		
		cout << "O valor de a para\n b= " << b << ", e i= "<< i << ", e l=" << l <<" e f= " << f << " eh \n a= " << a << endl;
	}
}


int main(){
	int opcao=0;
	
	do{
		cout << "Escolha a Equacao que deseja calcular:" << endl;
		cout << "\tDigite 1 para Equacao de Pitagoras." << endl;
		cout << "\tDigite 2 para Equacao da Lei da Gravidade." << endl;
		cout << "\tDigite 3 para Equacao da Teoria da Relatividade." << endl;
		cout << "\tDigite 4 para Equacao da Teoria do Caos." << endl;
		cout << "\tDigite 5 para Equacao de Clapeyron." << endl;
		cout << "\tDigite 6 para Equacao de Torricelli." << endl;
		cout << "\tDigite 7 para Equacao de Gauss." << endl;
		cout << "\tDigite 8 para Equacao da Forca magnetica atuante sobre uma particula." << endl << endl;
		cout << "Digite sua opcao -> ";
	
		cin >> opcao;
		
	}while( (opcao<1) || (opcao>8) );
	
	switch(opcao){
		case 1:	
			pitagoras();
			break;
		case 2:
			gravidade();
			break;
		case 3:
			relatividade();
			break;
		case 4:
			caos();
			break;
		case 5:
			clapeyron();
			break;
		case 6:
			torricelli();
			break;
		case 7:
			gauss();
			break;
		case 8:
			particula();
			break;
	
	}
}
