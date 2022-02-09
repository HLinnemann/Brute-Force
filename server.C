/*
 * server.C
 *
 *  Created on: 11.09.2019
 *      Author: aml
 */
#include <cstdio> // standard input and output library
#include <cstdlib> // this includes functions regarding memory allocation
#include <cstring> // contains string functions
#include <cerrno> //It defines macros for reporting and retrieving error conditions through error codes
#include <ctime> //contains various functions for manipulating date and time

#include <unistd.h> //contains various constants
#include <sys/types.h> //contains a number of basic derived types that should be used whenever appropriate
#include <arpa/inet.h> // defines in_addr structure
#include <sys/socket.h> // for socket creation
#include <netinet/in.h> //contains constants and structures needed for internet domain addresses

#include "SIMPLESOCKET.H"
#include <iostream>
#include <string>
#include "SHA256.H"
#include "TASK1.H"

using namespace std;
using namespace TASK1;

class MyServer : public TCPserver{
public:
		MyServer(int portNmb, int maxDataRecv) : TCPserver(portNmb, maxDataRecv){
			b = new BlackBoxSafe(3,4);
		};



protected:
		string myResponse(string input);
		BlackBoxSafe *b;



};



int main(){
	srand(time(nullptr));
	MyServer srv(2038,25);
	srv.run();
}

string MyServer::myResponse(string input){

	if (input.compare(0,11,"NewPassword")==0)
	{
		int resultSscanf;
		int pwdl;	//Passwortlänge
		int pwda;	//zulaessige Zeichen des Passworts
		resultSscanf = sscanf(input.c_str(), "NewPassword(%i,%i)",&pwdl, &pwda);

		delete b;
		b = new BlackBoxSafe(pwdl,pwda);


		return string ("Done");
	}


	if (input.compare(0,14,"checkPassword(")==0)
	{
		const char *tmpPwdChr=input.c_str();
		char pwdChr[input.size()];

		for (int i = 0;i<input.size();i++)	//Array leeren
		{
			pwdChr[i]='\0';
		}

		for (int j = 14;j<input.size();j++)	//Array umfüllen
		{
			if(tmpPwdChr[j]==')')
				{break;}
			pwdChr[j-14]=tmpPwdChr[j];
		}
		string pwd = string(pwdChr);

		cout<<pwd<<endl;

		return (b->input(pwd));
	}


	return string("Error");


}
