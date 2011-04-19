// Made by Peter "Stickman" Muller
#include "StdAfx.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to Stickman's DK64 Title Screen Code Generator" << endl << endl;
	cout << "Instructions:" << endl;
	cout << "The following prompts will ask you to replace the words that are shown." << endl;
	cout << "Your new phrase must have the same number of characters as the old one." << endl;
	cout << "Add spaces to the end of your new phrase if it contains less characters." << endl;
	cout << "USE ONLY CAPITALS! It is obnoxious, but it won't work in the game otherwise." << endl;
	cout << "You may use numbers, punctuation, and spaces." << endl << endl << endl;

	// all variables
	unsigned int size;
	int i,j; //counters
	string dktv,copy,press,nocon; //variables for each part to be replaced.
	char x,y;
	
	while(dktv.length()!=5)
	{
		size = 5;
		cout << "\"DK TV\" (5 characters)" << endl;
		getline(cin,dktv);
		if(dktv.length() != size)
		{
			cerr << "Error: Your phrase is not " << size << " characters long. Please try again." << endl;
		}
	}

	while(copy.length()!=28)
	{
		size = 28;
		cout << endl << endl << "\"1999 NINTENDO. GAME BY RARE.\" (28 characters)" << endl;
		getline(cin,copy);
		if(copy.length() != size)
		{
			cerr << "Error: Your phrase is not " << size << " characters long. Please try again." << endl;
		}
	}

	while(press.length()!=11)
	{
		size = 11;
		cout << endl << endl << "\"PRESS START\" (11 characters)" << endl;
		getline(cin,press);
		if(press.length() != size)
		{
			cerr << "Error: Your phrase is not " << size << " characters long. Please try again." << endl;
		}
	}

	while(nocon.length()!=13)
	{
		size = 13;
		cout << endl << endl << "\"NO CONTROLLER\" (13 characters)" << endl;
		getline(cin,nocon);
		if(nocon.length() != size)
		{
			cerr << "Error: Your phrase is not " << size << " characters long. Please try again." << endl;
		}
	}

	//crunch all strings together
	string all = dktv + copy + press + nocon;

	//Make new text file and add the code to it
	ofstream file;
	file.open("DK64 Title Screen Code.txt");
	file << "DK64 Title Screen Mod [stickman]" << endl;
	for(i=0,j=1; i<=54,j<=55; i=i+2, j=j+2)
	{
		x = all[i];
		y = all[j];
		cout << hex << uppercase << 2167328704 + i << " " << (int)x << (int)y << endl;
		file << hex << uppercase << 2167328704 + i << " " << (int)x << (int)y << endl;
	}
	x = all[56];
	cout << "812ECFF8 " << (int)x << "E0" << endl << endl;
	file << "812ECFF8 " << (int)x << "E0" << endl << endl;
	file << "This code was generated by Stickman's DK64 Title Screen Code Generator." << endl;
	file << "For more information, check out Stickman's blog at:" << endl << "http://stickman221.wordpress.com" << endl;
	file.close();

	cout << "Code Generated!" << endl;

	//Code is now generated


    return 0;
}