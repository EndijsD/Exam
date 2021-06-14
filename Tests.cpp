//Lietotas bibliotekas - "librarys"
#include <iostream>
#include <conio.h>
#include <unistd.h>

using namespace std;

//Tiek definets globalais mainigais "arPirmo" ar sakuma vertibu 0, lai skaititu uz cik jautajumiem tiek atbildets ar pirmo reizi
//Tiek definets globalais mainigais "i" ar sakuma vertibu 1
int arPirmo = 0, i = 1;

//Tiek definetas izveidotas metodes
void jautajumi();
void nepareizs();

int main(){
	//Veic teksta izvadisanu
	cout<<"\t\t\t\t\t\t\tTests\n\n\tTema:\n\tMainigie, to datu tipi, pamatdarbibas darbam ar tiem programmesanas valoda C++";
	
	//Veic teksta izvadisanu
	cout<<"\n\n\n\t\t\tPiespiediet jebkuru taustinu, lai saktu testu!";
	//Metode nopauze konsoli, lidzkamer klaviaturas poga ir nospiesta
	getch();
	//Tiek notirits konsoles logs
	system("CLS");
	
	//Veic teksta izvadisanu
	cout<<"\n\n\t\tKatram testa uzdevumam (kopa 10) ir divi pareizi atbilzu varianti!";
	//Programma tiek aptureta/apstadinata uz 5 sekundem
	sleep(5);
	//Tiek notirits konsoles logs
	system("CLS");
	
	//Izsauc metodi "jautajumi"
	jautajumi();
	
	//Tiek notirits konsoles logs
	system("CLS");
	
	//Veic teksta izvadisanu
	cout<<"\n\n\t\tTu atbildeji uz "<<arPirmo<<" jautajumiem ar pirmo reizi!";
	
	//Veic teksta izvadisanu
	cout<<"\n\n\n\tPiespiediet jebkuru taustinu, lai apturetu testu un aizvertu programmu!";
	//Metode nopauze konsoli, lidzkamer klaviaturas poga ir nospiesta
	getch();
	
	//Atgriezs 0 izejas kodu "exit code", kas nozime, ka programmas izpilde ir bijusi veiksmiga
	return 0;
}

void jautajumi(){
	//Define vajadzigos mainigos
	int x = 1, a;
	bool answer = false;
	
	//Izveidota switch funkcija, kura katrs zars ir prieks katra jautajuma
	switch(x){
		case 1:
			//Dara, kamer atbilde ir nepareiza
			do{
				//Izsauc metodi "nepareizs"
				nepareizs();
				
				//Veic teksta izvadisanu
				cout<<"\n\t\tKas ir mainigie?\n";
				cout<<"\n\t1) Vertibas, ko dators izvelas prieks vajadzigas situacijas";
				cout<<"\n\t2) Konteineri datu vertibu glabasanai";
				cout<<"\n\t3) Tie pasi, kas metodes/funkcijas";
				cout<<"\n\t4) Noteikta tipa dati, kas tiek glabati operativaja atmina";
				cout<<"\n\n\t\tAtbilde (1-4):";
				//Tiek saglabats ievaditais cipars mainigaja "a"
				cin>>a;
				
				//Ja "a" ir 2 vai "a" ir 4, izpilda sekojosas komandas
				if(a == 2 || a == 4){
					answer = true;
					//Ja "i" ir 1, izpilda sekojosas komandas
					if(i == 1)
						arPirmo += 1;
				}
				//Mainigo "i" palielina pa 1
				i++;
			}while(answer == false);
			
			//Iestata vajadzigas vertibas un notira ekranu
			answer = false;
			x = 2;
			i = 1;
			system("CLS");
		
		case 2:
			//Dara, kamer atbilde ir nepareiza
			do{
				//Izsauc metodi "nepareizs"
				nepareizs();
				
				//Veic teksta izvadisanu
				cout<<"\n\t\tKurs no dotajiem ir pareizs mainigo definesanas veids?\n";
				cout<<"\n\t1) mansUzvards string = \"Berzs\";";
				cout<<"\n\t2) string uzvards = 'Abolins';";
				cout<<"\n\t3) double cipars = 11;";
				cout<<"\n\t4) char simbolsLiels = 'F';";
				cout<<"\n\n\t\tAtbilde (1-4):";
				//Tiek saglabats ievaditais cipars mainigaja "a"
				cin>>a;
				
				//Ja "a" ir 3 vai "a" ir 4, izpilda sekojosas komandas
				if(a == 3 || a == 4){
					answer = true;
					//Ja "i" ir 1, izpilda sekojosas komandas
					if(i == 1)
						arPirmo += 1;
				}
				//Mainigo "i" palielina pa 1
				i++;
			}while(answer == false);
			
			//Iestata vajadzigas vertibas un notira ekranu
			answer = false;
			x = 3;
			i = 1;
			system("CLS");
		
		case 3:
			//Dara, kamer atbilde ir nepareiza
			do{
				//Izsauc metodi "nepareizs"
				nepareizs();
				
				//Veic teksta izvadisanu
				cout<<"\n\t\tKada ir int mainiga pamatdarbiba?\n";
				cout<<"\n\t1) Visi minetie";
				cout<<"\n\t2) konkatesana - +";
				cout<<"\n\t3) dalijuma atlikums - %";
				cout<<"\n\t4) saskaitisana - +";
				cout<<"\n\n\t\tAtbilde (1-4):";
				//Tiek saglabats ievaditais cipars mainigaja "a"
				cin>>a;
				
				//Ja "a" ir 3 vai "a" ir 4, izpilda sekojosas komandas
				if(a == 3 || a == 4){
					answer = true;
					//Ja "i" ir 1, izpilda sekojosas komandas
					if(i == 1)
						arPirmo += 1;
				}
				//Mainigo "i" palielina pa 1
				i++;
			}while(answer == false);
			
			//Iestata vajadzigas vertibas un notira ekranu
			answer = false;
			x = 4;
			i = 1;
			system("CLS");
		
		case 4:
			//Dara, kamer atbilde ir nepareiza
			do{
				//Izsauc metodi "nepareizs"
				nepareizs();
				
				//Veic teksta izvadisanu
				cout<<"\n\t\tMainigais double var but ar komatiem?\n";
				cout<<"\n\t1) Ja, pat ja darbibas notiek ar int";
				cout<<"\n\t2) Tikai, ja ir darbibas ar int";
				cout<<"\n\t3) Ja";
				cout<<"\n\t4) Ne";
				cout<<"\n\n\t\tAtbilde (1-4):";
				//Tiek saglabats ievaditais cipars mainigaja "a"
				cin>>a;
				
				//Ja "a" ir 1 vai "a" ir 3, izpilda sekojosas komandas
				if(a == 1 || a == 3){
					answer = true;
					//Ja "i" ir 1, izpilda sekojosas komandas
					if(i == 1)
						arPirmo += 1;
				}
				//Mainigo "i" palielina pa 1
				i++;
			}while(answer == false);
			
			//Iestata vajadzigas vertibas un notira ekranu
			answer = false;
			x = 5;
			i = 1;
			system("CLS");
		
		case 5:
			//Dara, kamer atbilde ir nepareiza
			do{
				//Izsauc metodi "nepareizs"
				nepareizs();
				
				//Veic teksta izvadisanu
				cout<<"\n\t\tint, double, char, string ir vienigie mainigie, kas pastav\n";
				cout<<"\n\t1) Ne, ir vel ari bool";
				cout<<"\n\t2) Ja, vairak neviena nav";
				cout<<"\n\t3) Ir vel citi";
				cout<<"\n\t4) Vairak par 3 vel noteikti ir";
				cout<<"\n\n\t\tAtbilde (1-4):";
				//Tiek saglabats ievaditais cipars mainigaja "a"
				cin>>a;
				
				//Ja "a" ir 3 vai "a" ir 4, izpilda sekojosas komandas
				if(a == 3 || a == 4){
					answer = true;
					//Ja "i" ir 1, izpilda sekojosas komandas
					if(i == 1)
						arPirmo += 1;
				}
				//Mainigo "i" palielina pa 1
				i++;
			}while(answer == false);
			
			//Iestata vajadzigas vertibas un notira ekranu
			answer = false;
			x = 6;
			i = 1;
			system("CLS");
		
		case 6:
			//Dara, kamer atbilde ir nepareiza
			do{
				//Izsauc metodi "nepareizs"
				nepareizs();
				
				//Veic teksta izvadisanu
				cout<<"\n\t\tPabeidz mainiga definesanu: string mansMainigais = ...\n";
				cout<<"\n\t1) 'sis ir teksts';";
				cout<<"\n\t2) \"\";";
				cout<<"\n\t3) \"328095\";";
				cout<<"\n\t4) \"\"\";";
				cout<<"\n\n\t\tAtbilde (1-4):";
				//Tiek saglabats ievaditais cipars mainigaja "a"
				cin>>a;
				
				//Ja "a" ir 2 vai "a" ir 3, izpilda sekojosas komandas
				if(a == 2 || a == 3){
					answer = true;
					//Ja "i" ir 1, izpilda sekojosas komandas
					if(i == 1)
						arPirmo += 1;
				}
				//Mainigo "i" palielina pa 1
				i++;
			}while(answer == false);
			
			//Iestata vajadzigas vertibas un notira ekranu
			answer = false;
			x = 7;
			i = 1;
			system("CLS");
		
		case 7:
			//Dara, kamer atbilde ir nepareiza
			do{
				//Izsauc metodi "nepareizs"
				nepareizs();
				
				//Veic teksta izvadisanu
				cout<<"\n\t\tKurs no dotajiem salidzinasanas operacijas piemeriem ir nepareizs?\n";
				cout<<"\n\t1) 32 <= 32 = false";
				cout<<"\n\t2) 1349 <= 1348 = false";
				cout<<"\n\t3) 39 == 39 = true";
				cout<<"\n\t4) 3 < 9 = true";
				cout<<"\n\n\t\tAtbilde (1-4):";
				//Tiek saglabats ievaditais cipars mainigaja "a"
				cin>>a;
				
				//Ja "a" ir 1 vai "a" ir 4, izpilda sekojosas komandas
				if(a == 1 || a == 4){
					answer = true;
					//Ja "i" ir 1, izpilda sekojosas komandas
					if(i == 1)
						arPirmo += 1;
				}
				//Mainigo "i" palielina pa 1
				i++;
			}while(answer == false);
			
			//Iestata vajadzigas vertibas un notira ekranu
			answer = false;
			x = 8;
			i = 1;
			system("CLS");
		
		case 8:
			//Dara, kamer atbilde ir nepareiza
			do{
				//Izsauc metodi "nepareizs"
				nepareizs();
				
				//Veic teksta izvadisanu
				cout<<"\n\t\tIzvelies pareizo apgalvojumu!\n";
				cout<<"\n\t1) Ar mainigo char drikst veikt konkatenaciju, ja iznakums ir bool tipa mainigais";
				cout<<"\n\t2) Ar mainigo char var veikt konkatenaciju, pat ja iznakums ir char";
				cout<<"\n\t3) Ar mainigo char var veikt konkatenaciju, ja iznakums ir char masivs vai string";
				cout<<"\n\t4) Ar mainigo char ir iespejams veikt konkatenaciju, ja iznakums ir char masivs";
				cout<<"\n\n\t\tAtbilde (1-4):";
				//Tiek saglabats ievaditais cipars mainigaja "a"
				cin>>a;
				
				//Ja "a" ir 3 vai "a" ir 4, izpilda sekojosas komandas
				if(a == 3 || a == 4){
					answer = true;
					//Ja "i" ir 1, izpilda sekojosas komandas
					if(i == 1)
						arPirmo += 1;
				}
				//Mainigo "i" palielina pa 1
				i++;
			}while(answer == false);
			
			//Iestata vajadzigas vertibas un notira ekranu
			answer = false;
			x = 9;
			i = 1;
			system("CLS");
		
		case 9:
			//Dara, kamer atbilde ir nepareiza
			do{
				//Izsauc metodi "nepareizs"
				nepareizs();
				
				//Veic teksta izvadisanu
				cout<<"\n\t\tKadus lielumus/vertibas var parstavet mainigais bool?\n";
				cout<<"\n\t1) 0 - patiess, 1 - aplams";
				cout<<"\n\t2) 1 - patiess, 2 - aplams";
				cout<<"\n\t3) Divas vertibas: true, false";
				cout<<"\n\t4) 1 - patiess, 0 - aplams";
				cout<<"\n\n\t\tAtbilde (1-4):";
				//Tiek saglabats ievaditais cipars mainigaja "a"
				cin>>a;
				
				//Ja "a" ir 3 vai "a" ir 4, izpilda sekojosas komandas
				if(a == 3 || a == 4){
					answer = true;
					//Ja "i" ir 1, izpilda sekojosas komandas
					if(i == 1)
						arPirmo += 1;
				}
				//Mainigo "i" palielina pa 1
				i++;
			}while(answer == false);
			
			//Iestata vajadzigas vertibas un notira ekranu
			answer = false;
			x = 10;
			i = 1;
			system("CLS");
		
		case 10:
			//Dara, kamer atbilde ir nepareiza
			do{
				//Izsauc metodi "nepareizs"
				nepareizs();
				
				//Veic teksta izvadisanu
				cout<<"\n\t\tIzvelies pareizo apglvojumu!\n";
				cout<<"\n\t1) int diapazons ir -2147483648 - 2147483647";
				cout<<"\n\t2) unsigned long int diapazons ir -18 446 744 073 709 551 615 - 0";
				cout<<"\n\t3) short diapazons ir -98103547193 - 98103547193";
				cout<<"\n\t4) char nepieciesamais atminas daudzums ir 1 baits (8 biti)";
				cout<<"\n\n\t\tAtbilde (1-4):";
				//Tiek saglabats ievaditais cipars mainigaja "a"
				cin>>a;
				
				//Ja "a" ir 1 vai "a" ir 4, izpilda sekojosas komandas
				if(a == 1 || a == 4){
					answer = true;
					//Ja "i" ir 1, izpilda sekojosas komandas
					if(i == 1)
						arPirmo += 1;
				}
				//Mainigo "i" palielina pa 1
				i++;
			}while(answer == false);
	}
}

void nepareizs(){
	//Ja mainigais "i" nav vienads ar 1, tad izpilda sekojosas darbibas
	if(i != 1){
		//Tiek notirits konsoles logs
		system("CLS");
		//Veic teksta izvadisanu
		cout<<"\n\n\tNepareiza atbilde. Megini velreiz!\n\n";
	}
}

