// Learning about matrix in cpp
#include <iostream>
using namespace std;

int main(){
    int x[9] = {-3, 5, -8, 1, -10, -56, 35, -15, 95};
    int numAtual;
    for (int i = 0; i < 9; i++){
        numAtual = x[i];
        if(numAtual < 0){
            x[i] = 0;
        }
        cout << x[i] << " ";    
    }    
    return 0;
}
int main (){

int numeros[] = {2,2,3,4,4,4,4,5,5,7,9};
int quantidadeMaior = 0;
int numeroMaior = numeros[0];
int numeroAtual;
int quantidadeAtual;

for(int i = 0;i<12;i++){
    numeroAtual = numeros[i];
    quantidadeAtual = 0;
    for(int j = 0;j<12;j++){
        if(numeroAtual==numeros[j]){
            quantidadeAtual++;
}
}
    if(quantidadeAtual>quantidadeMaior){
        numeroMaior = numeroAtual;
        quantidadeMaior = quantidadeAtual;
}

}	


cout << "O numero que mais aparece: " << numeroMaior;
return 0;

}

int main (){
	//matriz multidimensional, lista dentro de listas,
	int l,c,n,m;
	int matriz[3][3];
	
	for(l=0; l<3;l++){
		for(c=0; c<3; c++){
			matriz[l][c]= c+1;
		}
	}
	for(n=0; n<3;n++){
		for(m =0; m<3; m++){
			cout<< matriz[n][m]<< " ";
		}
		cout << endl;
	}
}

int main (){
	int linha = 4, coluna = 4;
	int matriz [linha][coluna] = {
	{2 ,911, 94912, 123} ,
	{5610, 6640, 31313,321} ,
	{6400, 640, 7878,147} ,
	{996, 945, 3014,741}
	};
	int maiozao= matriz[0][0];
	int lm=0 , cm=0;
	
	for (int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			if(matriz[i][j]>= maiozao ){
			maiozao = matriz[i][j];
			lm = i;
			cm = j;	
			}
		
		}
	}
	cout << "A posicao do maiorzao e:" << endl << "linha:"<< lm << endl<< "coluna: " << cm;
}


