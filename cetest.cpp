#include <sys/types.h>
#include <unistd.h>

#include <utils/Log.h>
#include "interface_class.h"

int main(int argc, char** argv)
{
    InterfaceClass EngineInterface;
    EngineInterface.EngineInit();
    EngineInterface.EngineDeInit();
}
