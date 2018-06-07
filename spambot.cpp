#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

void click (int x, int y){
    SetCursorPos(x,y);
    mouse_event(MOUSEEVENTF_LEFTDOWN,x,y,0,0);
	mouse_event(MOUSEEVENTF_LEFTUP,x,y,0,0);}
void pressKey(string key){
 
    int keynr;
    if (key == "a") keynr = 0x41;
    else if (key == "b") keynr = 0x42;
    else if (key == "c") keynr = 0x43;
    else if (key == "d") keynr = 0x44;
    else if (key == "e") keynr = 0x45;
    else if (key == "f") keynr = 0x46;
    else if (key == "g") keynr = 0x47;
    else if (key == "h") keynr = 0x48;
    else if (key == "i") keynr = 0x49;
    else if (key == "j") keynr = 0x4A;
    else if (key == "k") keynr = 0x4B;
    else if (key == "l") keynr = 0x4C;
    else if (key == "m") keynr = 0x4D;
    else if (key == "n") keynr = 0x4E;
    else if (key == "o") keynr = 0x4F;
    else if (key == "p") keynr = 0x50;
    else if (key == "q") keynr = 0x51;
    else if (key == "r") keynr = 0x52;
    else if (key == "s") keynr = 0x53;
    else if (key == "t") keynr = 0x54;
    else if (key == "u") keynr = 0x55;
    else if (key == "v") keynr = 0x56;
    else if (key == "w") keynr = 0x57;
    else if (key == "x") keynr = 0x58;
    else if (key == "y") keynr = 0x59;
    else if (key == "z") keynr = 0x5A;
    else if (key == "0") keynr = 0x30;
    else if (key == "1") keynr = 0x31;
    else if (key == "2") keynr = 0x32;
    else if (key == "3") keynr = 0x33;
    else if (key == "4") keynr = 0x34;
    else if (key == "5") keynr = 0x35;
    else if (key == "6") keynr = 0x36;
    else if (key == "7") keynr = 0x37;
    else if (key == "8") keynr = 0x38;
    else if (key == "9") keynr = 0x39;
    else if (key == " ") keynr = 0x20;
    else if (key == "ENTER") keynr = 0x0D;

    INPUT ip;
    ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = 0;
    ip.ki.time = 0;
    ip.ki.dwExtraInfo = 0;
    ip.ki.wVk = keynr;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
}

int main () {

	int n = 1;
	int times;
	int done;
	int sleepy;
	string choice;

	start:
	
    cout << "Spambot Version 1.1" << endl;
    cout << "   " << endl;
	
	cout << "How many messages do you wish to send?" << endl;
	cout << " : ";
	
cin >> times;

	cout << "How much time should be between messages? (Miliseconds)" << endl;
	cout << "(MS): ";
cin >> sleepy;
done = 0;
	
cout << "starting in 5..." << endl;
Sleep(1000);
cout << "starting in 4..." << endl;
Sleep(1000);
cout << "starting in 3..." << endl;
Sleep(1000);
cout << "starting in 2..." << endl;
Sleep(1000);
cout << "starting in 1..." << endl;
Sleep(1000);

while (done <= times)
    {	
        Sleep(sleepy);
		pressKey ("c");	
		pressKey ("h");	
		pressKey ("a");
		pressKey ("n");	
		pressKey ("g");	
		pressKey ("e");	
		pressKey (" ");
		pressKey ("t");			
		pressKey ("h");	
		pressKey ("i");	
		pressKey ("s");
		pressKey (" ");
		pressKey ("i");	
		pressKey ("n");	
		pressKey (" ");
		pressKey ("c");	
		pressKey ("o");	
		pressKey ("d");	
		pressKey ("e");
		pressKey (" ");	
		pressKey ("t");	
		pressKey ("o");
		pressKey (" ");
		pressKey ("c");	
		pressKey ("h");	
		pressKey ("a");
		pressKey ("n");	
		pressKey ("g");	
		pressKey ("e");	
		pressKey (" ");
		pressKey ("s");	
		pressKey ("p");	
		pressKey ("a");
		pressKey ("m");
		pressKey ("m");	
		pressKey ("e");	
		pressKey ("s");
		pressKey ("s");
		pressKey ("a");	
		pressKey ("g");
		pressKey ("e");
		pressKey ("ENTER");	
		done++;
    }
	
	cout << "Spambot has Finished." << endl;       		//einde
    cout << "Application Written by Pim." << endl;
    cout << "    " << endl;
    Sleep(1000);
    cout << "Again?   (y) or (n)" << endl;					
    cin >> choice;

    if (choice == "y")
    {
        system("cls");
        goto start;
    }
    cin.get();
 
}
