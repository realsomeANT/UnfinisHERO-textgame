
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <Windows.h>
#include <time.h>
using namespace std;

int i, j, k, l, m, n, e, f, v, x = 0;
int C, M, H, dmg, Q, nus;
int r;
int monster[3][3] =
{ { 30,35,40 },
{ 40,47,54},
{ 50,60,70 }, }
;
int hero[2] =
{ 135,60 };
int nu[2][2] = { {1,3},{2,4} };

string NS[3] = { "First","Second","Boss" };
string NB[3] = { "zombie","skeleton","Dargon" };
string SH[2][2] = { {"slash","stab",},{"fire ball","heal",} };
int hatkk[2][2] = { {7,14},
					{9,18} };


void cc() {
	cout << "control channel : ";
};

class rdatk {
public:
	int random_between(int offset, int range)
	{
		srand(time(0));
		r = ((rand() % range) + offset);
		return r;
	}
};

void P() {
	for (int o = 0; o < 5; o++)
	{
		cout << " ...\n";
		Sleep(200);
	}
};
void p() {
	for (int o = 0; o < 2; o++)
	{
		cout << " ...\n";
		Sleep(200);
	}
};

int matk() {
	rdatk mm;
	mm.random_between(5, 6);
	return  r;
}
int hatk() {
	rdatk hh;
	hh.random_between((hatkk[H][0]), (((hatkk[H][1]) - (hatkk[H][0])) + 1));
	return  r;

}

class fight {
public:
	void setstage() {
		if (v < 3) {
			for (int z = 0; z < 3; z++) {
				cout << "						" << NS[z] << " stage " << endl;
				cout << "						name :" << NB[z] << endl;
				cout << "						HP = [" << monster[M][z] << "]" << endl;
				p();
				if (monster[M][z] != 0) {
					while (i < 1)
					{
						cout << "						HERO HP = [" << hero[H] << "]" << endl;
						cout << "						[" << SH[H][0] << "]=[" << nu[H][(0)] << "]" << "       [" << SH[H][1] << "]=[" << nu[H][(1)] << "]" << endl;
						p();
						cout << "select skill:";
						while (x < 1) {
							cin >> Q;
							if (Q == 1 && H == 0) {
								cout << "					Hero atk... " << endl;
								monster[M][z] -= hatk();
								x++;
							}
							else if (Q == 2 && H == 1) {
								cout << "					Hero atk... " << endl;
								monster[M][z] -= hatk();
								x++;
							}
							else if (Q == 3 && H == 0) {
								cout << "					Hero atk... " << endl;
								monster[M][z] -= 10;
								x++;
							}
							else if (Q == 4 && H == 1) {
								cout << "						healing " << endl;
								hero[H] += 13;
								cout << "						HERO" << " HP = [" << hero[H] << "]" << endl;
								x++;
							}
							else {
								cout << "Please provide numbers" << endl;
							}
						} x = 0;

						while (j < 1)
						{
							if (monster[M][z] < 1) {
								j++;
								i++;
								v++;
							}
							else {
								cout << "						" << NB[z] << "	HP = [" << monster[M][z] << "]" << endl;
								cout << "						" << NB[z] << "	monster atk...." << endl;
								p();
								hero[H] -= matk();
								cout << "						HERO" << " HP = [" << hero[H] << "]" << endl;
								p();
								if (hero[H] < 1) {
									j++;
									i++;
									v += 3;
									cout << "						YOU DIE " << endl;
								}

								j++;
							}

						}j = 0;


					}i = 0;

				}
				else {
					v++;

				}
			}
		}if (v == 3 && hero[H] > 0) {
			P();
			cout << "					 THE dragon is dead " << endl;
			cout << "						YOU WIN " << endl;
		}

	}
};


void setting() {
	while (k < 1) {
		cin >> C;
		switch (C)
		{
		case 1:
			cout << setw(50) << "Please select a difficulty" << endl;
			cout << "			Noob HERO [0] " << endl;
			cout << "			     HERO [1] " << endl;
			cout << "			 Chatchat [2] " << endl;
			while (e < 1) {
				cc();
				cin >> M;
				if (M == 0 || M == 1 || M == 2) {
					cout << setw(50) << "Please select a hero" << endl;
					cout << "                ------              " << "                  ++          " << endl;
					cout << "               | ==== |             " << "        $$       ++++         " << endl;
					cout << "               |  **  |             " << "       $$$$  ___+++++++___    " << endl;
					cout << "             __|______|__           " << "        $$      | * * |       " << endl;
					cout << "            / /########| |          " << "        ||   ____@@@@@____    " << endl;
					cout << "           / / ########| |          " << "        ||  / /@@@@@@@@@| |   " << endl;
					cout << "          / /  ########[__}         " << "        || / / | @@@@@ || |   " << endl;
					cout << "<=========]&}  ^^^^^^^^             " << "        ||/ /  |  @@@  || |   " << endl;
					cout << "               |#|  |#|             " << "        {$__]  |^^^^^^^|[__}  " << endl;
					cout << "               |_|  |_|             " << "        ||     |#|   |#|      " << endl;
					cout << "               |_|  | |_            " << "        ||    _|_|   |_|_     " << endl;
					cout << "             {___]  [___}           " << "        ||   {___]   [___}    " << endl;
					cout << "              [ Knight ]            " << "               [ Wizard ]     " << endl;
					cout << "             HP    = [ 60 ]           " << "              HP    = [ 30 ]     " << endl;
					cout << "             ATK   = [ 7-14 ]         " << "              ATK   = [ 9-18 ]     " << endl;
					cout << "             skill = [slash]          " << "              skill = [fire ball]  " << endl;
					cout << "             skill = [stab]           " << "              skill = [heal]       " << endl;
					cout << "                  [ 0 ]                " << "                  [ 1 ]     " << endl;
					while (f < 1) {
						cc();
						cin >> H;
						if (H == 0 || H == 1) {
							fight BT;
							BT.setstage();

							f++;
						}
						else {
							cout << "Please provide numbers" << endl;
						}



					}e++;
				}
				else {
					cout << "Please provide numbers" << endl;
				}

			}k++;
			break;
		case 2:
			P();
			cout << setw(50) << "Welcome to the GAME" << endl;
			p();
			cout << setw(50) << "This game is called" << endl;
			P();
			cout << setw(51) << "* Unfinished HERO *\n" << endl;
			cout << "This is a turn-based game inspired by Pokemon" << endl;
			cout << "how to play is    1.You have to choose a hero. " << endl;
			cout << "                  2.Choose what to do in each turn. " << endl;
			cout << "                  3.Win 3 stages to finish the game." << endl;
			p();
			cout << setw(51) << "Start    [1]\n" << setw(51) << "Description [2]\n" << setw(51) << "Exit     [3]\n";
			cc();
			break;
		case 3: {
			cout << "Do you want to leave? : YES[1] , NO[0]" << endl;
			cc();
			while (m < 1) {
				cin >> n;
				if (n == 1) {
					m++;
					k++;

				}
				else if (n == 0) {
					cout << setw(51) << "Start    [1]\n" << setw(51) << "Description [2]\n" << setw(51) << "Exit     [3]\n";
					cc();
					m++;

				}
				else {
					cout << "Please provide numbers" << endl;
					cout << "YES[1] , NO[0]" << endl;

				}
			}m = 0;
		}
			  break;

		default:
			cout << "Please provide numbers" << endl;

		}
	}
};

int main()
{

	cout << setw(51) << "* Unfinished HERO *\n" << endl;
	cout << setw(51) << "Start    [1]\n" << setw(51) << "Description [2]\n" << setw(51) << "Exit     [3]\n";
	p();
	cout << setw(57) << "Please enter a number to control\n" << endl;
	cc();
	setting();

	system("pause");
	return 0;
}







