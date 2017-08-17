// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

#include "utils.h"

static void InitLog(void)
{
	HANDLE hFile;

	hFile = CreateFile(L"kraw.log", GENERIC_WRITE, FILE_SHARE_READ, NULL,
		CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE) {
		DisplayError(TEXT("CreateFile"));
	}
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

