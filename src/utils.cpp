#include "stdafx.h"

#include "utils.h"

#include <wchar.h>

void DisplayError(LPTSTR lpszFunction)
{
	WCHAR buf[64];
	_snwprintf_s(buf, 64, _TRUNCATE, L"Failed to load dll: %d", GetLastError());
	MessageBox(NULL, buf, L"boo", MB_OK);
}