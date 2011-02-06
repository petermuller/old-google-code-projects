// Made by Peter "Stickman" Muller

#include "StdAfx.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int num, i; // number of hex files, counter
    string name, off, hack, region; // creator name, offset, name of hack, region

    cout << "Welcome to Stickman's Hex Packet Readme Maker!" << endl << endl;

    // Prepare for the header and body of readme
    cout << "Please specify the number of .hex files to be contained in this Readme." << endl;
    cin >> num;
    cout << endl << endl << "Please enter your name for credit purposes. (Don't use spaces!)" << endl;
    cin >> name;
    cout << endl << endl << "Please enter the region of your hack (NTSC-U, NTSC-J, or PAL)" << endl;
    cin >> region;

    // Make a new file and write header
    ofstream file;
    file.open("NEW HexPacketReadMe.txt");
    file << "Hex Packet Information" << endl;
    file << "Arranged by Stickman" << endl;
    file << "Hack by " << name << endl << endl;
    file << region << endl << endl << endl;
    file << "Directions" << endl << endl << endl;
    file << "Open smashbros_sound.brsar in your favorite hex editor. The keyboard shortcuts shown apply mainly to HxD." << endl << endl << endl;

    // Steps loop
    for (i = 1; i <= num; i++)
    {
        // hex packet info input
        cout << endl << "Please enter the name (include \".hex\") of hex packet " << i << " (Don't use spaces!)" << endl;
        cin >> hack;
        cout << endl << "Please enter the offset where your hack will go" << endl;
        cin >> off;

        // write the info to the file, with amazing detail
        file << "Open " << hack << " in your hex editor." << endl << endl;
        file << "Copy the contents of " << hack << " by \"Select All\" (Ctrl + A) and then \"Copy\" (Ctrl + C)." << endl << endl;
        file << "In smashbros_sound.brsar, \"Go to\" (Ctrl + G) offset " << off << endl << endl;
        file << "\"Paste (overwriting current data)\" (Ctrl + B)" << endl << endl << endl;
    }

    // ending steps
    file << "\"Save\" (Ctrl + S)" << endl << endl;
    file << "Enjoy!" << endl << endl << endl << endl << endl << endl;
	file << "This Readme was made with Stickman's Readme Maker. For more information, check out his blog at http://stickman221.wordpress.com " << endl;
    file.close();
    cout << endl << "New ReadMe file created!" << endl;


    return 0;
}