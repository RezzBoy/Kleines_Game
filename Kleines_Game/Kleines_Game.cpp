// ***************************************************
// Projekt:      
// Copyright:    
// Author:		D. Santana     
// Datum:        
// Notizen: 
// ***************************************************

#include <iostream>
#include <cstdlib>
using namespace ::std;
class Feld {

public:
	int grosse[5][5] = {0}
	void setPos(int a, int b)
	{

	}

};
class Monster {

public:
	int HP = 100;
	int AT = 20;
	int rang = 1;

	void getStatus()
	{
		cout << "Dein HP ist: " << HP << endl;

	}

	void Atake(int a) {
		a - AT;
	}
};
class Mensch {

public:
	int HP = 30;
	int AT = 10;
	int posMensch[2] = { 1,1 };
	int rang = 1;
	int hoche = 1;
	int breite = 1;

	void newPos(int a, int c) {
		posMensch[2] = { a, c };
	}
	int getPos() {
		return hoche;
		return breite;

	}
	void getStatus()
	{
		cout << "Dein HP ist: " << HP << endl;

	}
	int Atake(int a)
	{
		return	a - AT;
	}
};

using namespace std;

int main()
{
	Feld feld;
	Mensch a;
	Monster b;
	b.HP = a.Atake(b.HP);
	b.getStatus();
	cout<<a.getPos();
	






	system("PAUSE");
	return 0;
}
