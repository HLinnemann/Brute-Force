//============================================================================
// Name        : INF3_Prak.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <string>
#include <iostream>

#include <cstdio>      /* printf, NULL */
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */

#include <unistd.h>

#include "SHA256.H"
#include "TASK1.H"

using namespace std;
using namespace TASK1;

int main(){

	//demoTASK1_00();
	int l = 2;
	int z = 2;
	int zahlen[l] = {0};

	for(int i = 0; i < l; i++)
	{
		for(int p = 0; p <>= x; p++)
		{

			for(int k = 0; k <= z; k++)
			{
				zahlen[i] = k;
				for(int j = 0; j < l ; j++)
				{
					cout << zahlen[j];
				}
				cout << endl;
			}
		}
	}
		//string pin(zahlen);//In  String umgewandelten Array
		//cout << "Test" << endl;
		//cout << pin << endl;

    return 0;
}

/*void pinKnacken(int l, int z)		// l = länge des Pins ; z = Zahlen bis bsp.: z = 8 bedeutet zahlen 0 bis 8
{
	char zahlen[l] = {0,0,0,0};

	string pin = zahlen;//In  String umgewandelten Array
	cout << pin << endl;
	/*for(int i = ((z+1)^l);  i <= l; i++)
	{
		//Abbruch falls letztes Passwort Korrekt per if
		for(int k = 0; k )

	}
}*/



