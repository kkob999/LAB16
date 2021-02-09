#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(unsigned int N){	
    vector<int> v;
    for(unsigned int i = 0; i < N; i++) v.push_back(rand()%10);
    return v;
}

void showVector(vector<int> &n){
	cout << "[";
	for(unsigned int i = 0; i < n.size()-1; i++){
		cout << n[i];
		if(i>=n.size()) cout << "]";
		else cout << " ";
	}
}

int dotProduct(vector<int> &n,vector<int> &b){
	int sum = 0;
	for(unsigned int i = 0; i < n.size(); i++) sum += n[i]*b[i];	
	return sum;
}

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}