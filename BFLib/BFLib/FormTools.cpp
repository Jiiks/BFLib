#include "formtools.h"

extern "C"
{
	//Used to move a borderless form
	//Usage:
	//[DllImport("BFLib.dll")]
	//public static extern void moveForm(IntPtr hWnd = form handle);
	__declspec(dllexport) void __stdcall moveForm(HWND hWnd)
	{
		if (GetKeyState(VK_LBUTTON) < 0)
		{
			ReleaseCapture();
			SendMessage(hWnd, WM_NCLBUTTONDOWN, HTCAPTION, 0);
		}
	}
}
