#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "FASTPPlugin.h"

void FASTPPlugin::input(std::string file) {
   readParameterFile(file);
}

void FASTPPlugin::run() {}

void FASTPPlugin::output(std::string file) {
//aqmm  -a AS_metagenome -b AS_metatranscriptome -m meta_data.txt -n 12 -o testout2
       	std::string outputfile = file;
       	std::string myCommand = "fastp -i "+myParameters["forward"]+" -I "+myParameters["reverse"]+" >& "+file;
 std::cout << myCommand << std::endl;
system(myCommand.c_str());
}

PluginProxy<FASTPPlugin> FASTPPluginProxy = PluginProxy<FASTPPlugin>("FASTP", PluginManager::getInstance());
