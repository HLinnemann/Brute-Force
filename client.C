/*
 * client.C
 *
 *  Created on: 11.09.2019
 *      Author: aml
 */

#include <string>
#include <iostream>
#include <unistd.h>
#include <sstream>					//contains various constants

#include "SIMPLESOCKET.H"

using namespace std;

int main() {
	srand(time(NULL));
	TCPclient c;
	string host = "localhost";
	string msg;
	string msg1;
	string msg2;

	//connect to host
	c.conn(host,2038);

	int l = 4;		//manuelle Eingabe benötigt
	int z = 4;


	std::stringstream ssd;
	ssd.str("");
	ssd << "NewPassword("<< l <<","<< z <<")";
	msg = ssd.str();

	c.sendData(msg);
	msg1 = c.receive(32);		//Bedeutung der Zahl
	int status = 1 ;
	int counter = 0;
	while(1)
	{
		//password senden
		//Zufalls_Passwort
		char testZeichen [] = {'A','B','C','D','E','F','G','H','I','J','C','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
								   'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
								   '0','1','2','3','4','5','6','7','8','9'};
		char  Passwort [l];
		for (int i = 0;i<l;i++)
		{
				Passwort[i]=testZeichen[rand()%z];
		}
		string pwd = string(Passwort);

		std::stringstream ssd1;
		ssd1.str("");
		ssd1 << "checkPassword("<< pwd<<")";
		msg = ssd1.str();

		c.sendData(msg);
		msg2 = c.receive(32);
		counter ++;
		if (msg2.compare(0,15,"ACCESS ACCEPTED")==0)
		{
			cout <<counter<<endl;
			c.sendData("BYEBYE");
			c.receive(32);
			return 0;
		}


	}

}











	/*msg = string("Test");
		cout << "client sends:" << msg << endl;
	c.sendData(msg);
	msg = c.receive(10);
	cout << "got response:" << msg << endl;
	int i=0;
	bool goOn=1;
	while(goOn){ // send and receive data
		if((rand() % 20) < i++){
			msg = string("BYEBYE");
			goOn = 0;
		}else{
			msg = string("client wants this");
		}
		cout << "client sends:" << msg << endl;
		c.sendData(msg);
		msg = c.receive(32);
		cout << "got response:" << msg << endl;
		sleep(1);

	}*/
