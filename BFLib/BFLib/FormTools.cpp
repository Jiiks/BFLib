#include "formtools.h"

extern "C"
{
	__declspec(dllexport) void __stdcall moveForm(HWND hWnd)
	{
		if (GetKeyState(VK_LBUTTON) < 0)
		{
			ReleaseCapture();
			SendMessage(hWnd, WM_NCLBUTTONDOWN, HTCAPTION, 0);
		}
	}
}
