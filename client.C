/*
 * client.C
 *
 *  Created on: 11.09.2019
 *      Author: aml
 */

#include <string>
#include <iostream>
#include <unistd.h> //contains various constants

#include "SIMPLESOCKET.H"

using namespace std;

int main() {
	srand(time(NULL));
	TCPclient c;
	string host = "localhost";
	string msg;

	//connect to host
	c.conn(host,2035);












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
}

void pinKnacken(int l, int z)		// l = länge des Pins ; z = Zahlen bis bsp.: z = 8 bedeutet zahlen 0 bis 8
{
	char zahlen[l] = {0,0,0,0};

	string pin = zahlen;//In  String umgewandelten Array
	cout << pin << endl;
	/*for(int i = ((z+1)^l);  i <= l; i++)
	{
		//Abbruch falls letztes Passwort Korrekt per if
		for(int k = 0; k )

	}*/
}

