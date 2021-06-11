#include <iostream>
#include <conio.h>

using namespace std;

void jautajumi();

int main(){
	cout<<"\t\t\t\t\t\t\tTests\n\nTema:\nMainigie, to datu tipi, pamatdarbibas darbam ar tiem programmesanas valoda C++";
	
	cout<<"\n\nPiespiediet jebkuru taustinu, lai saktu testu!";
	
	getch();
	
	system("CLS");
	
	jautajumi();
	
	return 0;
}

void jautajumi(){
	int x = 1, a;
	bool answer = false;
	
	switch(x){
		
		case 1:
			do{
			cout<<"\n\t\t1. Jautajums\n";
			cout<<"\n\t1) Opcija1";
			cout<<"\n\t2) Opcija2";
			cout<<"\n\t3) Opcija3";
			cout<<"\n\t4) Opcija4";
			cout<<"\n\n\t\tAtbilde:";
			cin>>a;
			
			if(a == 2 || a == 4)
				answer = true;
			
			}while(answer == false);
			
			x = 2;
	}
}

