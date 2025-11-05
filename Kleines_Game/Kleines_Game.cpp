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
	//int grosse[5][5] = { 0 };
	//void newPos(int a, int b) {
	//	pos[0] = a;
	//	pos[1] = b;
	
	//int getPos() {
	//	/*int positionH = pos[0];
	//	int poistionB = pos[1];*/

	//}

};


class Monster {

public:
	int HP = 100;
	int AT = 20;
	int rang = 1;
	int pos[2] = { 1,1 };

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
	int pos[2] = { 1, 1 };
	int rang = 1;
	int hoche = 1;
	int breite = 1;

	void move(int dx, int dy) {
		int neuX = pos[0] + dx;
		int neuY = pos[1] + dy;

		if (neuX >= 0 && neuX < 5 && neuY >= 0 && neuY < 5) {
			pos[0] = neuX;
			pos[1] = neuY;
			cout << "Bewegt nach [" << pos[0] << "][" << pos[1] << "]" << endl;
		}
		else {
			cout << "bewegung auserhalb spielfeld";
		}
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
	
	Mensch a;
	Monster b;
	b.HP = a.Atake(b.HP);
	b.getStatus();
	a.move(1, 3);
	
	






	system("PAUSE");
	return 0;
}
