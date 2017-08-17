#pragma once

#ifdef KEYMAP_EXPORTS
#define KEYMAP_API __declspec(dllexport)
#else
#define KEYMAP_API __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif
	// Returns a + b
	KEYMAP_API LRESULT CALLBACK ReportKeyboardEvents(int code, WPARAM wParam, LPARAM lParam);

	// Returns a * b
	// static KEYMAP_API double Multiply(double a, double b);

	// Returns a + (a * b)
	// static KEYMAP_API double AddMultiply(double a, double b);
#ifdef __cplusplus
}
#endif