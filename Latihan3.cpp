#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
int main () {
	char str [80] = "Hello";
	//strcpy (str,"Ini");
	strcat (str,"Adalah");
	strcat (str, "Hasil");
	strcat (str, "Concate.");
	puts (str);
	return 0;
}