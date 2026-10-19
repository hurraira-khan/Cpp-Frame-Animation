#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;
void drawFrame(int frame)
{
	system("cls");
    // Speed control variables
    int sunPos   = (frame / 2) % 40;
    int cloudPos = (frame / 3) % 60;
    int birdPos  = (frame * 2) % 70;
    int carPos   = frame % 45;
    int trainPos = (frame / 2) % 60;
    int manPos   = frame % 40;
    int windPos  = frame % 4;
    int wavePos  = frame % 4;
    int leafWave = frame % 2;
    int lightOn  = frame % 4 < 2; // house lights blink
    int fishJump = frame % 20;    // fish jumps sometimes
    int grassWave = frame % 2;
    // -------- SKY --------
    for (int i = 0; i < sunPos; i++) cout << " ";
    cout << " O " << endl; // Sun
    for (int i = 0; i < cloudPos; i++) cout << " ";
    cout << "~~~~~   ~~~~" << endl; // Clouds
    for (int i = 0; i < birdPos; i++) cout << " ";
    if (frame % 2 == 0)
        cout << "vVv" << endl;
    else
        cout << "VvV" << endl;
    cout << endl;
    // -------- MOUNTAINS --------
    cout << "   /\\        /\\        /\\       /\\       /\\      " << endl;
    cout << "  /  \\      /  \\      /  \\     /  \\     /  \\     " << endl;
    // -------- TREES --------
    if (leafWave == 0)
        cout << "   /\\       /\\        /\\       /\\       /\\     " << endl;
    else
        cout << "   /--\\     /--\\      /--\\     /--\\     /--\\   " << endl;
    cout << "   ||       ||        ||       ||       ||      " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    // -------- HOUSE --------
    if (lightOn)
        cout << "  /\\        " << "    []   " << "   /\\       " << endl;
    else
        cout << "  /\\        " << "    --   " << "   /\\       " << endl;
    cout << " /__\\_______/__\\_______/__\\______" << endl;

    // -------- WINDMILL --------
    if (windPos == 0)
        cout << "     |\\ " << endl;
    else if (windPos == 1)
        cout << "     /| " << endl;
    else if (windPos == 2)
        cout << "     -|- " << endl;
    else
        cout << "     \\|/ " << endl;
    cout << "      |  " << endl;
    cout << "     / \\ " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    // -------- TRAIN IN BACKGROUND --------
    for (int i = 0; i < trainPos; i++) cout << " ";
    cout << "[]-[]-[]-[]-[]" << endl;

    // -------- CAR --------
    for (int i = 0; i < carPos; i++) cout << " ";
    cout << "     ______" << endl;
    for (int i = 0; i < carPos; i++) cout << " ";
    cout << " ___//_||__\\___" << endl;
    for (int i = 0; i < carPos; i++) cout << " ";
    cout << "|_   ___   __  _|" << endl;
    for (int i = 0; i < carPos; i++) cout << " ";
    cout << "  O         O" << endl;
    // -------- MAN WALKING --------
    for (int i = 0; i < manPos; i++) cout << " ";
    if (frame % 2 == 0) 
	{
        cout << "  O  " << endl;
        for (int i = 0; i < manPos; i++) cout << " ";
        cout << " /|\\ " << endl;
        for (int i = 0; i < manPos; i++) cout << " ";
        cout << " / \\ " << endl;
    } else 
	{
        cout << "  O  " << endl;
        for (int i = 0; i < manPos; i++) cout << " ";
        cout << " \\|/ " << endl;
        for (int i = 0; i < manPos; i++) cout << " ";
        cout << " / \\ " << endl;
    }
    // -------- RIVER + FISH --------
    if (wavePos == 0)
        cout << "~~~~~~~^^^^^^^~~~~~~~^^^^^^^~~~~~~~^^^^^^^~~~~~~" << endl;
    else if (wavePos == 1)
        cout << "^^^^^^^~~~~~~~^^^^^^^~~~~~~~^^^^^^^~~~~~~~^^^^^^" << endl;
    else if (wavePos == 2)
        cout << "~~~~~~~^^^^^^^~~~~~~~^^^^^^^~~~~~~~^^^^^^^~~~~~~" << endl;
    else
        cout << "^^^^^^^~~~~~~~^^^^^^^~~~~~~~^^^^^^^~~~~~~~^^^^^^" << endl;

    // Fish jump animation
    if (fishJump > 10 && fishJump < 14)
	{
        for (int i = 0; i < fishJump; i++) cout << " ";
        cout << "><(((º>" << endl;
    } else 
	{
        cout << endl;
    }
    // -------- GRASS SWAY --------
    if (grassWave == 0)
        cout << "  ////\\\\\\\\////\\\\\\\\////\\\\\\\\////\\\\\\\\////" << endl;
    else
        cout << "  \\\\\\\\////\\\\\\\\////\\\\\\\\////\\\\\\\\////\\\\\\\\" << endl;
}
int main()
{
    int choice;
    cout << "   ANIMATION PROJECT (C++)   \n";
    
    cout << "1. Start Animation\n";
    cout << "2. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        for (int frame = 0; frame < 300; frame++)
        {
            drawFrame(frame);
            Sleep(100);
        }

        system("cls");
        cout << "\nAll 12 animations completed successfully!\n";
    }
    else
    {
        cout << "\nProgram exited without animation.\n";
    }

    return 0;
}

