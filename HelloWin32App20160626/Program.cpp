#include <windows.h>

int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpCmdLine,
                     int nCmdShow)
{
    MessageBox(NULL, TEXT("こんにちは世界！！"), TEXT("HelloWorld!!"), MB_OK);
}
