#include <graphics.h>
#include <conio.h>
#include <string.h>
#pragma comment(lib,"Winmm.lib")
#include "PlayMusicOnce.h"  #д��




int main()
{
	initgraph(640, 480);
	while (1)
	{
		PlayMusicOnce("�������.mp3");
		Sleep(200000);
		PlayMusicOnce("�������.mp3");
		Sleep(200000);
	}
	getch();
	return 0;
}
