#include <iostream>
#include <conio.h>

using namespace std;

int arPirmo = 0;

void jautajumi();

int main(){
	cout<<"\t\t\t\t\t\t\tTests\n\n\tTema:\n\tMainigie, to datu tipi, pamatdarbibas darbam ar tiem programmesanas valoda C++";
	
	cout<<"\n\n\n\t\t\tPiespiediet jebkuru taustinu, lai saktu testu!";
	
	getch();
	
	system("CLS");
	
	jautajumi();
	
	system("CLS");
	
	cout<<"\n\n\t\tTu atbildeji uz "<<arPirmo<<" jautajumiem ar pirmo reizi!";
	
	cout<<"\n\n\n\tPiespiediet jebkuru taustinu, lai apturetu testu un aizvertu programmu!";
	
	getch();
	
	return 0;
}

void jautajumi(){
	int x = 1, a, i = 1;
	bool answer = false;
	
	switch(x){
		
		case 1:
			do{
			
			cout<<"\n\t\tKas ir mainigie?\n";
			cout<<"\n\t1) Vertibas, ko dators izvelas prieks vajadzigas situacijas";
			cout<<"\n\t2) Konteineri datu vertibu glabasanai";
			cout<<"\n\t3) Tie pasi, kas metodes/funkcijas";
			cout<<"\n\t4) Noteikta tipa dati, kas tiek glabati operativaja atmina";
			cout<<"\n\n\t\tAtbilde:";
			cin>>a;
			
			if(a == 2 || a == 4){
				answer = true;
				if(i == 1)
					arPirmo += 1;
			}
			i++;
			}while(answer == false);
			
			answer = false;
			x = 2;
			i = 1;
		
		case 2:
			do{
			
			cout<<"\n\t\tKurs no dotajiem ir pareizs mainigo definesanas veids?\n";
			cout<<"\n\t1) mansUzvards string = \"Berzs\";";
			cout<<"\n\t2) string uzvards = 'Abolins';";
			cout<<"\n\t3) double cipars = 11;";
			cout<<"\n\t4) char simbolsLiels = 'F';";
			cout<<"\n\n\t\tAtbilde:";
			cin>>a;
			
			if(a == 3 || a == 4){
				answer = true;
				if(i == 1)
					arPirmo += 1;
			}
			i++;
			}while(answer == false);
			
			answer = false;
			x = 3;
			i = 1;
		
		case 3:
			do{
			
			cout<<"\n\t\tKada ir int mainiga pamatdarbiba?\n";
			cout<<"\n\t1) Visi minetie";
			cout<<"\n\t2) konkatesana - +";
			cout<<"\n\t3) dalijuma atlikums - %";
			cout<<"\n\t4) saskaitisana - +";
			cout<<"\n\n\t\tAtbilde:";
			cin>>a;
			
			if(a == 3 || a == 4){
				answer = true;
				if(i == 1)
					arPirmo += 1;
			}
			i++;
			}while(answer == false);
			
			answer = false;
			x = 4;
			i = 1;
		
		case 4:
			do{
			
			cout<<"\n\t\tMainigais double var but ar komatiem?\n";
			cout<<"\n\t1) Ja, pat ja darbibas notiek ar int";
			cout<<"\n\t2) Tikai, ja ir darbibas ar int";
			cout<<"\n\t3) Ja";
			cout<<"\n\t4) Ne";
			cout<<"\n\n\t\tAtbilde:";
			cin>>a;
			
			if(a == 1 || a == 3){
				answer = true;
				if(i == 1)
					arPirmo += 1;
			}
			i++;
			}while(answer == false);
			
			answer = false;
			x = 5;
			i = 1;
		
		case 5:
			do{
			
			cout<<"\n\t\tint, double, char, string ir vienigie mainigie, kas pastav\n";
			cout<<"\n\t1) Ne, ir vel ari bool";
			cout<<"\n\t2) Ja, vairak neviena nav";
			cout<<"\n\t3) Ir vel citi";
			cout<<"\n\t4) Vairak par 3 vel noteikti ir";
			cout<<"\n\n\t\tAtbilde:";
			cin>>a;
			
			if(a == 3 || a == 4){
				answer = true;
				if(i == 1)
					arPirmo += 1;
			}
			i++;
			}while(answer == false);
			
			answer = false;
			x = 6;
			i = 1;
		
		case 6:
			do{
			
			cout<<"\n\t\tPabeidz mainiga definesanu: string mansMainigais = ...\n";
			cout<<"\n\t1) 'sis ir teksts';";
			cout<<"\n\t2) \"\";";
			cout<<"\n\t3) \"328095\";";
			cout<<"\n\t4) \"\"\";";
			cout<<"\n\n\t\tAtbilde:";
			cin>>a;
			
			if(a == 2 || a == 3){
				answer = true;
				if(i == 1)
					arPirmo += 1;
			}
			i++;
			}while(answer == false);
			
			answer = false;
			x = 7;
			i = 1;
		
		case 7:
			do{
			
			cout<<"\n\t\tKurs no dotajiem salidzinasanas operacijas piemeriem ir nepareizs?\n";
			cout<<"\n\t1) 32 <= 32 = false";
			cout<<"\n\t2) 1349 <= 1348 = false";
			cout<<"\n\t3) 39 == 39 = true";
			cout<<"\n\t4) 3 < 9 = true";
			cout<<"\n\n\t\tAtbilde:";
			cin>>a;
			
			if(a == 1 || a == 4){
				answer = true;
				if(i == 1)
					arPirmo += 1;
			}
			i++;
			}while(answer == false);
			
			answer = false;
			x = 8;
			i = 1;
		
		case 8:
			do{
			
			cout<<"\n\t\tIzvelies pareizo apgalvojumu!\n";
			cout<<"\n\t1) Ar mainigo char drikst veikt konkatenaciju, ja iznakums ir bool tipa mainigais";
			cout<<"\n\t2) Ar mainigo char var veikt konkatenaciju, pat ja iznakums ir char";
			cout<<"\n\t3) Ar mainigo char var veikt konkatenaciju, ja iznakums ir char masivs vai string";
			cout<<"\n\t4) Ar mainigo char ir iespejams veikt konkatenaciju, ja iznakums ir char masivs";
			cout<<"\n\n\t\tAtbilde:";
			cin>>a;
			
			if(a == 3 || a == 4){
				answer = true;
				if(i == 1)
					arPirmo += 1;
			}
			i++;
			}while(answer == false);
			
			answer = false;
			x = 9;
			i = 1;
		
		case 9:
			do{
			
			cout<<"\n\t\tKadus lielumus/vertibas var parstavet mainigais bool?\n";
			cout<<"\n\t1) 0 - patiess, 1 - aplams";
			cout<<"\n\t2) 1 - patiess, 2 - aplams";
			cout<<"\n\t3) Divas vertibas: true, false";
			cout<<"\n\t4) 1 - patiess, 0 - aplams";
			cout<<"\n\n\t\tAtbilde:";
			cin>>a;
			
			if(a == 3 || a == 4){
				answer = true;
				if(i == 1)
					arPirmo += 1;
			}
			i++;
			}while(answer == false);
			
			answer = false;
			x = 10;
			i = 1;
		
		case 10:
			do{
			
			cout<<"\n\t\tIzvelies pareizo apglvojumu!\n";
			cout<<"\n\t1) int diapazons ir -2147483648 - 2147483647";
			cout<<"\n\t2) unsigned long int diapazons ir -18 446 744 073 709 551 615 - 0";
			cout<<"\n\t3) short diapazons ir -98103547193 - 98103547193";
			cout<<"\n\t4) char nepieciesamais atminas daudzums ir 1 baits (8 biti)";
			cout<<"\n\n\t\tAtbilde:";
			cin>>a;
			
			if(a == 1 || a == 4){
				answer = true;
				if(i == 1)
					arPirmo += 1;
			}
			i++;
			}while(answer == false);
	}
}

