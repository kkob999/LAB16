#include<iostream>
using namespace std;

void myString(char *&P, int N){
	P = new char[N+1];    
	for(int i = 0; i < N;i++) P[i] = 'A'+i;
	P[N] = 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
