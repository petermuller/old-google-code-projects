// Made by Peter "Stickman" Muller
#include "StdAfx.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to Stickman's Spiderman Main Menu Code Generator" << endl << endl;
	cout << "Instructions:" << endl;
	cout << "The following prompts will ask you to replace the words that are shown." << endl;
	cout << "Your new phrase must have the same number of characters as the old one." << endl;
	cout << "Add spaces to the end of your new phrase if it contains less characters." << endl;
	cout << "You may use numbers and spaces, but not all punctuation works." << endl << endl << endl;

	// all variables
	unsigned int size;
	int i,j; //counters
	string cont,newg,contr,opt,train,rec,spec,gall,conn,play; //variables for each part to be replaced.
	char x,y;

	//Make new text file
	ofstream file;
	file.open("Spiderman Main Menu Codes.txt");
	file << "Stickman's Spiderman Main Menu Text Mod Generator" << endl;

	//Continue
	file << endl << "Continue" << endl;
	while(cont.length()!=8)
	{
		size = 8;
		cout << "\"Continue\" (8 characters)" << endl;
		getline(cin,cont);
		if(cont.length() != size)
		{
			cerr << endl << "Error: Your phrase is not " << size << " characters long. Please try again." << endl << endl;
		}
	}
	for(i=0,j=1; i<=6,j<=7; i=i+2, j=j+2)
	{
		x = cont[i];
		y = cont[j];
		cout << hex << uppercase << 2164355480 + i << " " << (int)x << (int)y << endl;
		file << hex << uppercase << 2164355480 + i << " " << (int)x << (int)y << endl;
	}

	//New Game
	file << endl << "New Game" << endl;
	while(newg.length()!=8)
	{
		size = 8;
		cout << endl << "\"New Game\" (8 characters)" << endl;
		getline(cin,newg);
		if(newg.length() != size)
		{
			cerr << endl << "Error: Your phrase is not " << size << " characters long. Please try again." << endl << endl;
		}
	}
	for(i=0,j=1; i<=6,j<=7; i=i+2, j=j+2)
	{
		x = newg[i];
		y = newg[j];
		cout << hex << uppercase << 2164355492 + i << " " << (int)x << (int)y << endl;
		file << hex << uppercase << 2164355492 + i << " " << (int)x << (int)y << endl;
	}

	//Controller Pak
	file << endl << "Controller Pak" << endl;
	while(contr.length()!=14)
	{
		size = 14;
		cout << endl << "\"Controller Pak\" (14 characters)" << endl;
		getline(cin,contr);
		if(contr.length() != size)
		{
			cerr << endl << "Error: Your phrase is not " << size << " characters long. Please try again." << endl << endl;
		}
	}
	for(i=0,j=1; i<=12,j<=13; i=i+2, j=j+2)
	{
		x = contr[i];
		y = contr[j];
		cout << hex << uppercase << 2164355504 + i << " " << (int)x << (int)y << endl;
		file << hex << uppercase << 2164355504 + i << " " << (int)x << (int)y << endl;
	}

	//Options
	file << endl << "Options" << endl;
	while(opt.length()!=7)
	{
		size = 7;
		cout << endl << "\"Options\" (7 characters)" << endl;
		getline(cin,opt);
		if(opt.length() != size)
		{
			cerr << endl << "Error: Your phrase is not " << size << " characters long. Please try again." << endl << endl;
		}
	}
	for(i=0,j=1; i<=4,j<=5; i=i+2, j=j+2)
	{
		x = opt[i];
		y = opt[j];
		cout << hex << uppercase << 2164355520 + i << " " << (int)x << (int)y << endl;
		file << hex << uppercase << 2164355520 + i << " " << (int)x << (int)y << endl;
	}
	x = opt[6];
	cout << hex << uppercase << 2164355526 << " " << (int)x << "00" << endl;
	file << hex << uppercase << 2164355526 << " " << (int)x << "00" << endl;

	//Training
	file << endl << "Training" << endl;
	while(train.length()!=8)
	{
		size = 8;
		cout << endl << "\"Training\" (8 characters)" << endl;
		getline(cin,train);
		if(train.length() != size)
		{
			cerr << endl << "Error: Your phrase is not " << size << " characters long. Please try again." << endl << endl;
		}
	}
	for(i=0,j=1; i<=6,j<=7; i=i+2, j=j+2)
	{
		x = train[i];
		y = train[j];
		cout << hex << uppercase << 2164355528 + i << " " << (int)x << (int)y << endl;
		file << hex << uppercase << 2164355528 + i << " " << (int)x << (int)y << endl;
	}

	//Records
	file << endl << "Records" << endl;
	while(rec.length()!=7)
	{
		size = 7;
		cout << endl << "\"Records\" (7 characters)" << endl;
		getline(cin,rec);
		if(rec.length() != size)
		{
			cerr << endl << "Error: Your phrase is not " << size << " characters long. Please try again." << endl << endl;
		}
	}
	for(i=0,j=1; i<=4,j<=5; i=i+2, j=j+2)
	{
		x = rec[i];
		y = rec[j];
		cout << hex << uppercase << 2164355540 + i << " " << (int)x << (int)y << endl;
		file << hex << uppercase << 2164355540 + i << " " << (int)x << (int)y << endl;
	}
	x = rec[6];
	cout << hex << uppercase << 2164355546 << " " << (int)x << "00" << endl;
	file << hex << uppercase << 2164355546 << " " << (int)x << "00" << endl;

	//Special
	file << endl << "Special" << endl;
	while(spec.length()!=7)
	{
		size = 7;
		cout << endl << "\"Special\" (7 characters)" << endl;
		getline(cin,spec);
		if(spec.length() != size)
		{
			cerr << endl << "Error: Your phrase is not " << size << " characters long. Please try again." << endl << endl;
		}
	}
	for(i=0,j=1; i<=4,j<=5; i=i+2, j=j+2)
	{
		x = spec[i];
		y = spec[j];
		cout << hex << uppercase << 2164355548 + i << " " << (int)x << (int)y << endl;
		file << hex << uppercase << 2164355548 + i << " " << (int)x << (int)y << endl;
	}
	x = spec[6];
	cout << hex << uppercase << 2164355554 << " " << (int)x << "00" << endl;
	file << hex << uppercase << 2164355554 << " " << (int)x << "00" << endl;
	
	//Gallery
	file << endl << "Gallery" << endl;
	while(gall.length()!=7)
	{
		size = 7;
		cout << endl << "\"Gallery\" (7 characters)" << endl;
		getline(cin,gall);
		if(gall.length() != size)
		{
			cerr << endl << "Error: Your phrase is not " << size << " characters long. Please try again." << endl << endl;
		}
	}
	for(i=0,j=1; i<=4,j<=5; i=i+2, j=j+2)
	{
		x = gall[i];
		y = gall[j];
		cout << hex << uppercase << 2164355556 + i << " " << (int)x << (int)y << endl;
		file << hex << uppercase << 2164355556 + i << " " << (int)x << (int)y << endl;
	}
	x = gall[6];
	cout << hex << uppercase << 2164355562 << " " << (int)x << "00" << endl;
	file << hex << uppercase << 2164355562 << " " << (int)x << "00" << endl;

	//Continue Not Available
	file << endl << "Continue Not Available" << endl;
	while(conn.length()!=22)
	{
		size = 22;
		cout << endl << "\"Continue Not Available\" (22 characters)" << endl;
		getline(cin,conn);
		if(conn.length() != size)
		{
			cerr << endl << "Error: Your phrase is not " << size << " characters long. Please try again." << endl << endl;
		}
	}
	for(i=0,j=1; i<=20,j<=21; i=i+2, j=j+2)
	{
		x = conn[i];
		y = conn[j];
		cout << hex << uppercase << 2164355588 + i << " " << (int)x << (int)y << endl;
		file << hex << uppercase << 2164355588 + i << " " << (int)x << (int)y << endl;
	}

	//Play Again!
	file << endl << "Play Again!" << endl;
	while(play.length()!=11)
	{
		size = 11;
		cout << endl << "\"Play Again!\" (11 characters)" << endl;
		getline(cin,play);
		if(play.length() != size)
		{
			cerr << endl << "Error: Your phrase is not " << size << " characters long. Please try again." << endl << endl;
		}
	}
	for(i=0,j=1; i<=8,j<=9; i=i+2, j=j+2)
	{
		x = play[i];
		y = play[j];
		cout << hex << uppercase << 2164355612 + i << " " << (int)x << (int)y << endl;
		file << hex << uppercase << 2164355612 + i << " " << (int)x << (int)y << endl;
	}
	x = play[10];
	cout << hex << uppercase << 2164355622 << " " << (int)x << "00" << endl;
	file << hex << uppercase << 2164355622 << " " << (int)x << "00" << endl;

	//End of program / close file
	file << endl << "Code generated by Stickman's Spiderman Main Menu Text Mod Generator." << endl << "For more information, check out Stickman's blog at:" << endl << "http://stickman221.wordpress.com" << endl;
	file.close();
	cout << endl << "Code Generated!" << endl;

	return 0;
}