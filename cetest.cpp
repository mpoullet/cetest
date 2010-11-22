#include <sys/types.h>
#include <unistd.h>

#include <utils/Log.h>
#include "interface_class.h"

// To debug CodecEngine use the CE_DEBUG variable
// at the top of init.rc, include a line like this: "export CE_DEBUG X"
// where X is one of 1,2,3:
// * Setting CE_DEBUG=1 before running the Codec Engine-based application, without any other preparation in the build or the code,
// causes all warnings and errors (both on the application processor and any remote processors, if they exist) to be printed on standard output.
// * Setting CE_DEBUG=2 turns on almost all tracing lines (except for most annoying and largely unnecessary ones),
// which gives additional insight into what is going on on the ARM (and the optional DSP).
// * Setting CE_DEBUG=3 turns on all tracing. This includes tracing for the infrastructure actually collecting the tracing from remote processors(!).
// To disable this logging, you must UNSET the CE_DEBUG variable
// More information: http://processors.wiki.ti.com/index.php/CE_DEBUG

// To debug Dmai use the DMAI_DEBUG variable
// at the top of init.rc, include a line like this: "export DMAI_DEBUG X"
// where X is one of 0,1,2:
// DMAI_DEBUG=0: disables DMAI trace, even if it is set by Dmai_setLogLevel in the application itself
// DMAI_DEBUG=1: errors and warnings
// DMAI_DEBUG=2: all messages

int main(int argc, char** argv)
{
    // Set no buffering
    setvbuf(stdout, 0, _IONBF, 0);
    setvbuf(stderr, 0, _IONBF, 0);

    printf("[%s]: %d\n", __FUNCTION__, __LINE__);
    LOGI("[%s]: %d\n", __FUNCTION__, __LINE__);

    InterfaceClass EngineInterface;
    EngineInterface.EngineInit();
    EngineInterface.EngineDeInit();
}
