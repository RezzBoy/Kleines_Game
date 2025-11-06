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
	int grosse[5][5] = { 0 };
	void changFeld(int a, int b) {
		grosse[a][b] = 1;
	}

	void printFeld() {
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++) {
				cout << grosse[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	void removePosition(int a, int b) {
		grosse[a][b] = 0;

	}
};


class Monster {

public:
	int HP = 100;
	int AT = 20;
	int rang = 1;
	int altePos[2];
	int pos[2] = { 1,2 };
	void move(int dx, int dy) {
		altePos[0] = pos[0];
		altePos[1] = pos[1];
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
	int getPosX()
	{
		int x = pos[0];
		return x;
	}
	int getPosY()
	{
		int y = pos[1];
		return y;
	}

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
	int altePos[2];
	int pos[2] = { 1, 1 };
	int rang = 1;
	

	void move(int dx, int dy) {
		altePos[0] = pos[0];
		altePos[1] = pos[1];
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
	int getPosX()
	{
		int x = pos[0];
		return x;
	}
	int getPosY()
	{
		int y = pos[1];
		return y;
	}
};

using namespace std;

int main()
{
	
	Mensch a;
	
	Monster b;
	Feld feld;
	feld.changFeld(a.getPosX(), a.getPosY());
	b.HP = a.Atake(b.HP);
	b.getStatus();
	b.move(2, 1);
	feld.removePosition(b.altePos[0], b.altePos[1]);


	feld.printFeld();
	feld.changFeld(b.getPosX(), b.getPosY());
	feld.printFeld();
	b.move(1, 1);
	feld.changFeld(b.getPosX(), b.getPosY());
	feld.printFeld();
	a.move(1, 2);

	feld.removePosition(a.altePos[0], a.altePos[1]);
	feld.printFeld();

	test


	system("PAUSE");
	return 0;
}
