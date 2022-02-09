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
	srand(time(nullptr));

<<<<<<< HEAD
}
=======
	//Zufalls Passwort

	int l = 10;//Passwortlänge
	int s = 10;//zulässige Zeichen
	char testZeichen [] = {'A','B','C','D','E','F','G','H','I','J','C','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
						   'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
						   '0','1','2','3','4','5','6','7','8','9'};
	char  Passwort [l];
	for (int i = 0;i<=l;i++)
	{

		Passwort[i]=testZeichen[rand()%s];

	}

	string pwd = string(Passwort);
>>>>>>> f6ac3eed1cb2d195647713da5beca56feb2c0131


	demoTASK1_00(pwd);
	//cout<<pwd<<endl;//Passwort ausgabe

	//Passswort systematisch hochzählen
return 0;

}



