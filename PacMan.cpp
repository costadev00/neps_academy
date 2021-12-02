#include<bits/stdc++.h>
using namespace std;
int main(){
		int n;
		cin >> n;
		cin.ignore();
		int maior = INT_MIN;
		int cont =0;
		char c;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
			cin >> c;
			if(c=='o')
				cont++;
		    if(c=='A')
				cont=0;
			maior = max(cont,maior);
			cout<<cont<<endl;
			cout<<maior<<endl;
		}
	}
	cout<<maior<<endl;
}
