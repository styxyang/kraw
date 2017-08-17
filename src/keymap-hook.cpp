// keymap-hook.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

#define KEYMAP_EXPORTS

#include "keymap.h"

KEYMAP_API LRESULT CALLBACK ReportKeyboardEvents(int code, WPARAM wParam, LPARAM lParam)
{
	MessageBox(NULL, L"hello", L"boo", MB_OK);
	return 0;
}

KEYMAP_API LRESULT CALLBACK ReportKeyboardEventsLL(int nCode, WPARAM wParam, LPARAM lParam)
{
	return 0;
}