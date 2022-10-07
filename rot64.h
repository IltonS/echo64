//---------------------------------------------------------------------------
#include <string>

#ifndef rot64H
#define rot64H
//---------------------------------------------------------------------------
namespace rot64
{
   void show_help(void);
   void show_version(void);
   void param_router(int argc, char* argv[]);
   std::string rot_64(std::string message);
}

#endif
