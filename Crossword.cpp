#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int p_kata,cek,kata_ketemu;
	kata_ketemu=0;
	char masukkan[100];
	char puzzle[15][15]={ {'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},
						{'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'},
						{'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'},
						{'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'},
						{'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'},
						{'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'},
						{'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'},
						{'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'},
						{'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'},
						{'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'},
						{'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'},
						{'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'},
						{'m','o','s','g','z','c','z','e','t','d','b','o','o','t','o'},
						{'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'},
						{'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'}
						};
		
	for(int i=0;i<15;i++){
		for (int j=0;j<15;j++){
			cout<<puzzle[i][j]<<" ";
		}
		cout<<endl;
	}		
	
int p;
cin>>p;
for (int r4=0; r4<p; r4++){
	cin>>masukkan;
	p_kata=strlen(masukkan);					
}
	for (int i=0;i<15;i++){
		for (int j=0;j<15;j++){
			if (masukkan[0]==puzzle[i][j]){
				///HORIZONTAL KE KANAN
				for (int k=0;k<p_kata;k++){
					if (masukkan[k]==puzzle[i][j+k]){
						cek=k;
					}
					else{
						break;
					}
				}
				if (cek==p_kata-1){
					kata_ketemu+=1;
				}
				else{
					kata_ketemu+=0;
				}
				cek=0;
				///HORIZONTAL KE KIRI
				for (int k=0;k<p_kata;k++){
					if (masukkan[k]==puzzle[i][j-k]){
						cek=k;
					}
					else{
						break;
					}
				}
				if (cek==p_kata-1){
					kata_ketemu+=1;
				}
				else{
					kata_ketemu+=0;
				}
				cek=0;			
				///VERTIKAL KE BAWAH
				for (int k=0;k<p_kata;k++){
					if (masukkan[k]==puzzle[i+k][j]){
						cek=k;
					}
					else{
						break;
					}
				}
				if (cek==p_kata-1){
					kata_ketemu+=1;
				}
				else{
					kata_ketemu+=0;
				}
				cek=0;
				///Vertikal KE ATAS
				for (int k=0;k<p_kata;k++){
					if (masukkan[k]==puzzle[i-k][j]){
						cek=k;
					}
					else{
						break;
					}	
				}
				if (cek==p_kata-1){
					kata_ketemu+=1;
				}
				else{
					kata_ketemu+=0;
				}
				cek=0;
				///DIAGONAL KE KIRI ATAS
				for (int k=0;k<p_kata;k++){
					if (masukkan[k]==puzzle[i-k][j-k]){
						cek=k;
					}
					else{
						break;
					}
				}
				if (cek==p_kata-1){
					kata_ketemu+=1;
				}
				else{
					kata_ketemu+=0;
				}
				cek=0;
				///DIAGONAL KE KANAN ATAS
				for (int k=0;k<p_kata;k++){
					if (masukkan[k]==puzzle[i-k][j+k]){
						cek=k;
					}
					else{
						break;
					}
				}
				if (cek==p_kata-1){
					kata_ketemu+=1;
				}
				else{
					kata_ketemu+=0;
				}
				cek=0;
				///DIAGONAL KE KIRI BAWAH
				for (int k=0;k<p_kata;k++){
					if (masukkan[k]==puzzle[i+k][j-k]){
						cek=k;
					}
					else{
						break;
					}
				}
				if (cek==p_kata-1){
					kata_ketemu+=1;
				}
				else{
					kata_ketemu+=0;
				}
				cek=0;
				///DIAGONAL KANAN BAWAH
				for (int k=0;k<p_kata;k++){
					if (masukkan[k]==puzzle[i+k][j+k]){
						cek=k;
					}
					else{
						break;
					}
				}
				if (cek==p_kata-1){
					kata_ketemu+=1;
				}
				else{
					kata_ketemu+=0;
				}
				cek=0;	
			}
		}
	}
	if(kata_ketemu>0){
		cout<<"ADA";
	}
	else {
		cout<<"TIDAK ADA";
	}
}
