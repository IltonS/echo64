//---------------------------------------------------------------------------
#include <iostream>
#include "rot64.h"

#pragma hdrstop

using namespace std;
using namespace rot64;
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
   param_router(argc, argv);

   #ifdef _DEBUG
      cin.get();
   #endif

   return 0;
}
//---------------------------------------------------------------------------
 
