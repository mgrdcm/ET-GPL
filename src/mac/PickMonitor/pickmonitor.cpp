#include "CDrawSprocket.h"

OSStatus PickMonitorDialog( DisplayIDType* mDisplayId )
{
	*mDisplayId = 1;
	return noErr;
}

Boolean CanUserSelectMonitor()
{
	return false;
}