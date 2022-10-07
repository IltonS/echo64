//---------------------------------------------------------------------------
#pragma hdrstop

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "rot64.h"

namespace rot64
{
   using namespace std;

   void param_router(int argc, char* argv[])
   {
      if (argc==1) {
         show_help();
      }
      else{
         string param = (char *)argv[1];

         if ((param == "/V") || (param == "/v")){
            show_version();
         }else if (param == "/?"){
            show_help();
         }else if ((param.substr(0,3) == "/F:" ) || (param.substr(0,3) == "/f:" )){
            char* file_name;
            strcpy(file_name, param.substr(3).c_str());
            ifstream file(file_name);
            string line;
            while(std::getline(file, line)){
               cout << rot_64(line) << endl;
            }//while
         }else{
            //Get message param-------------------------------------------------
            string message;
            for(int i=1; i<argc; i++){
               if (message.length() == 0){
                  message = (char *)argv[i];
               }else{
                  message += " ";
                  message += (char *)argv[i];
               }
            }//i
            //------------------------------------------------------------------
            cout << rot_64(message) << endl;
         }
      }//!(argc==1)
   }

   string rot_64(string message)
   {
      for(unsigned int i=0; i<message.length(); i++){
         if ((message[i]<32) || (message[i]==127)) continue;
         message[i] -= 32;
         if (message[i]<47)
            message[i] += 47;
         else
            message[i] -= 47;
         message[i] += 32;
      }//i
      return message;
   }

   void show_help(void)
   {
      cout << "A simple character substitution cipher that replaces a character with the 64th character after it in the Standard ASCII table.\n" << endl;
      cout << "ECHO64 [/V]" << endl;
      cout << "       [/?]" << endl;
      cout << "       [/F:file]" << endl;
      cout << "       [message]\n" << endl;
      cout << "  /V          Show program version." << endl;
      cout << "  /?          Show program help." << endl;
      cout << "  /F:file     Displays the encrypted contents of the file." << endl;
      cout << "  message     Specifies a message to encrypt." << endl;

   }

   void show_version(void)
   {
      cout << "echo64 by IltonS - version 1.0.0.0" << endl;
   }
}

//---------------------------------------------------------------------------
#pragma package(smart_init)
