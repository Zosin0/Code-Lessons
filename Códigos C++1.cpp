/*
#include <iostream>
using namespace std;
 
int main(){
    int ano;
    cout << "Insira o ano de seu nascimento: ";
    cin >> ano;
    int idade = (2021 - ano);
    cout << "Sua idade e: " << idade << endl;

    if (idade < 19){
        cout<< "Voce e criança/adolescente! ";
    }
    else if (idade >= 19 && idade <60){
        cout << "Voce e adulto!";
    }
    else if (idade >= 60){
        cout << "Voce e idoso!";
    }
}
		int main(){
			int n;
				cout << "Insira um número que deseja realizar a tabuada (1-9): "<< "\n";
				cin >> n;
				while (0<n && n<=9){	
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
				if (n<0 || n>9)
					cout << "Insira um número válido!"<< "\n";
	}
}

}


int main(){ 
    char m;
    cout<< "Qual foi a sua mençao na disciplina LP? (A-F)"<< endl;
    cin >> m ;
    switch (m ){
        case 'A':
            cout<< "Excelente";
            break;
        case 'B':
            cout<< "Otimo";
            break;
        case 'C':
            cout<< "Bom";
            break;
        case 'D':
            cout<< "Regular";
            break;
        case 'E':
            cout<< "Ruim";
            break;
        case 'F':
            cout<< "Sem rendimento";
            break;
        default:
            cout<< "Insira uma mençao valida";
    }	

	int main(){
	
	int n ;
	int i = 0;
	cout << "Insira um numero: "<< endl;
	cin >> n;
	int i = 0;
	while (n!=2){
		i+= n; 	
	 	cin >> n;	
	}
	cout << "A soma e: " << i;
}
int main(){
	int idade = -1;
	int c = 0;
	int n = 0;
	cout << "Insira idades para fazer a media: "<< endl;
	while (idade !=0){
		cin >> idade;
		c++;
		n += idade;
	}
	c--;
	cout << "A media das idades e: " << (n/c);
}

