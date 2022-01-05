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
using namespace std;

class MyServer : public TCPserver{
public:
		MyServer(int portNmb, int maxDataRecv) : TCPserver(portNmb, maxDataRecv){;};


protected:
		string myResponse(string input);
		};
int main(){
	srand(time(nullptr));
	MyServer srv(2037,25);
	srv.run();
}

string MyServer::myResponse(string input){

	if (input.compare(0,10,"NewPassword")==0)
	{
		int resultSscanf;
		int pwdl = 0;
		int pwda = 0;
		resultSscanf = sscanf(input.c_str(), "NewPassword(%i,%i)",&pwdl, &pwda);
		//Funktionsaufruf createPasswort
		return string ("Done");
	}
	//else if (input.compare(0,12,"CheckPassword")==0)
	//{


		//HülseCode (HenrikHandy)

		/*if (pwdo.compare(0,pwdt.length,pwdt)==0)
		{
				return string("Access Granted!");
		}else
		{
			return("Access Denied!");
		}*/
			//}
}




		// Umwandlung erhaltenes Passwort in Hash-Wert






/*string MyServer::createPassword(int length, int sign)
{
	return 0;
}
*/
