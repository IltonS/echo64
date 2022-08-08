//---------------------------------------------------------------------------
#pragma hdrstop

#include <iostream>
#include <fstream>
#include <string>
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
         if ((std::string(argv[1]) == "-v") || (std::string(argv[1]) == "--version")){
            show_version();
         }else if ((std::string(argv[1]) == "-h") || (std::string(argv[1]) == "--help")){
            show_help();
         }else if ((std::string(argv[1]) == "-f") || (std::string(argv[1]) == "--file")){
            ifstream file(argv[2]);
            string line;
            while(std::getline(file, line)){
               cout << rot_64(line) << endl;
            }

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
      cout << "Usage: echo64 [-v | --version]" << endl;
      cout << "              [-h | --help]" << endl;
      cout << "              [-f | --file <source_file>]" << endl;
      cout << "              [<message>]" << endl;
   }

   void show_version(void)
   {
      cout << "echo64 version 1.0.0.0" << endl;
   }
}

//---------------------------------------------------------------------------
#pragma package(smart_init)
