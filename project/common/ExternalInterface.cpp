#ifndef STATIC_LINK
#define IMPLEMENT_API
#endif

#if defined(HX_WINDOWS) || defined(HX_MACOS) || defined(HX_LINUX)
#define NEKO_COMPATIBLE
#endif


#include <hx/CFFI.h>
#include "Utils.h"


using namespace chromebook_utils;



static value chromebook_utils_is_chromebook () {
	
	bool returnValue = isChromebook();
	return alloc_int(returnValue);
	
}
DEFINE_PRIM (chromebook_utils_is_chromebook, 0);



extern "C" void chromebook_utils_main () {
	
	val_int(0); // Fix Neko init
	
}
DEFINE_ENTRY_POINT (chromebook_utils_main);



extern "C" int chromebook_utils_register_prims () { return 0; }