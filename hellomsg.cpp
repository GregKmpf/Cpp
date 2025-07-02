#include <windows.h> //biblioteca funcoes windows

//ponto de entrada arq windows winmain, APIENTRY passa arg pro winmain
int APIENTRY WinMain (_In_ HINSTANCE hInstance,
                      _In_opt_ HINSTANCE hPrevInstance,
                      _In_ LPSTR lpCmdLine, //tipos def pelo propio windows
                      _In_ int nCmdShow)
{ 
    MessageBox(NULL, "Ola mundo", "Mensagem", 0);
    MessageBox(NULL, "Ola mundo 2", "Mensagem", 0);

    return 0;
}