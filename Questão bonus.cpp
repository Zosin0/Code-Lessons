#include <iostream>

using namespace std;

void menu()
{
	int c;
		cout << "Por favor digite a questao. Caso queira sair digite 9: "<< "\n";	
		cin >> c;
		switch (c)
		{
			case 1:
				cout << "Insira dois n�meros para comparar: "<< "\n";
				int x,y;
				cin >> x;
				cin >> y;
			{
				if (x == y)
			{
					cout << x << " � igual a "<< y;
			}
				else if (x > y)
			{
					cout << x << " � maior que "<< y ;
			}
				else 
			{
					cout << x << " � menor que " << y;
			}	
				menu ();
				break;
			}
			
			case 2:
			{
				int n;
				cout << "Insira um n�mero que deseja realizar a tabuada (0-20): "<< "\n";
				cin >> n;
				while (0<n && n<=20)
		{
					cout<< "--------------------------------"<< "\n";
					cout<< n << " x "<< 1 << "  = "<< (n*1)<< "\n";
					cout<< n << " x "<< 2 << "  = "<< (n*2)<< "\n";
					cout<< n << " x "<< 3 << "  = "<< (n*3)<< "\n";
					cout<< n << " x "<< 4 << "  = "<< (n*4)<< "\n";
					cout<< n << " x "<< 5 << "  = "<< (n*5)<< "\n";
					cout<< n << " x "<< 6 << "  = "<< (n*6)<< "\n";
					cout<< n << " x "<< 7 << "  = "<< (n*7)<< "\n";
					cout<< n << " x "<< 8 << "  = "<< (n*8)<< "\n";
					cout<< n << " x "<< 9 << "  = "<< (n*9)<< "\n";
					cout<< n << " x "<< 10 << " = "<< (n*10)<< "\n";
					cout<< "--------------------------------";
				break;
				if (n<0 || n>20)
					cout << "Insira um n�mero v�lido!"<< "\n";
		}
				menu ();
				break;
		}
			
			
			case 3:
			{
				string frase = "N�o irei passar na prova";
				frase.erase(0,3);
				cout << frase;
				menu ();
				break;
			}
			
			case 4:
			{
				int n;
				for (n % 2== 0;n<=100;n+=2)
					cout << n << "\n";
				menu ();
				break;
			}
			case 5:
			{
				int n;
				cout<< "Insira um n�mero para conferir se � par ou �mpar: "<< "\n";
				cin >> n;
				if (n=0 || n % 2==0)	
		{
					cout << "O n�mero escolhido � par!"<< "\n";
		}
				else 
		{
					cout << "O n�mero escolhido � �mpar!"<< "\n";
		}
				menu ();
				break;
		}
			case 6:
			{
				float n1,n2,n3,media;
				cout << "Insira as suas tr�s notas, de 1 a 3 respectivamente: " << "\n";
	
				cin >> n1;
				cin >> n2;
				cin >> n3;
				media = (n1*1 + n2*3 + n3*6)/10;
				cout << "Sua m�dia �: " << media << "\n";
	
				if (0 < media && media < 2){
    				cout << "Sua men��o � II!"<< "\n";
    				cout << "Voc� reprovou!";
		}
				if (2 <= media && media < 5){
    				cout << "Sua men��o � MI!"<< "\n";
    				cout << "Voc� reprovou!";
		}
				if (5 <= media && media< 7){
    				cout << "Sua men��o � MM!"<< "\n";
    				cout << "Voc� reprovou!";
 		} 
				if (7 <= media && media < 9){
					cout << "Sua men��o � MS!"<< "\n";
    				cout << "Voc� foi aprovado!";
		}
				if (9 <= media){
					cout << "Sua men��o � SS!"<< "\n";
    				cout << "Voc� foi aprovado!";
				menu ();
				break;
		}
		}
			case 7:
			{
				int n,n1;
				cout << "Insira dois n�meros para realizar as opera��es b�sicas: " << "\n";
				cin >> n;
				cin >> n1;
				cout << "A soma dos n�meros �: "<< (n + n1) << "\n";
				cout << "A subtra��o dos n�meros �: "<< (n - n1) << "\n";
				cout << "A multiplica��o dos n�meros �: "<< (n * n1) << "\n";	
				cout << "A divis�o dos n�meros �: "<< (n/n1) << "\n"; 
				menu ();
				break;
		}
			case 8:
		{
				string nome;
				int ano;
				cout << "Me informe seu nome e ano em que nasceu:"<< "\n";
    			cin >> nome;
    			cin >> ano;
				cout << "Seu nome � "<< nome << " e voc� tem " << (2021 - ano) << " anos!"<< "\n";
				menu ();
				break;
		}			
			
			default:
			{
				cout << "Digite um numero valido!" << "\n";
				menu ();
				break;
			}
		
}
}
int main(){
	menu ();
}



