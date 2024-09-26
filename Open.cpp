
#include <iostream>
#include <stdlib.h>
#include <windows.h>

int main()
{
	std::cout << "Opening!\n";

	WinExec("C:\\Program Files (x86)\\Steam\\steam.exe", SW_SHOWNORMAL);
	WinExec("C:\\Program Files\\Notepad++\\notepad.++.exe", SW_SHOWNORMAL);
	WinExec("C:\\Program Files (x86)\\Skillbrains\\Lightshot\\lightshot.exe", SW_SHOWNORMAL)

}