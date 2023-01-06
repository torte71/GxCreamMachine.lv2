// vim:ts=4:sw=4:noet:
#ifndef __GX_PLATFORM_APPLE_H__
#define __GX_PLATFORM_APPLE_H__ 1
#ifdef __APPLE__ 

#include "lv2/lv2plug.in/ns/lv2core/lv2.h"
#include "lv2/lv2plug.in/ns/extensions/ui/ui.h"

#include <cairo-quartz.h>

#include <gui/gx_gui.h>

/*---------------------------------------------------------------------
-----------------------------------------------------------------------
			common functions (required)
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

// example: https://cairo.cairographics.narkive.com/I86TGEQq/osx-os-x-example#post7

bool OpenDisplay(gx_CreamMachineUI *ui) {
	return true; // STUB
}

void CreateWindowAndSurface(gx_CreamMachineUI *ui) {
	// STUB
}

void RegisterControllerMessage(gx_CreamMachineUI *ui) {
	// STUB
}

void DestroyMainWindow(gx_CreamMachineUI *ui) {
	// STUB
}

void ResizeSurface(gx_CreamMachineUI *ui) {
	// STUB
}

void SendControllerEvent(gx_CreamMachineUI *ui, int controller) {
	// STUB
}

#endif /* __GX_PLATFORM_APPLE_H__ */
