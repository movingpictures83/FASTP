#ifndef FASTPPLUGIN_H
#define FASTPPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class FASTPPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "FASTP";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
