//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,	0},
	//{"", "sensors | awk '/^temp1:/{print $2}'", 5, 0},
	{"", "gettraffic", 10, 0},
	{"", "getconn", 60, 0},
	{"", "getupdates", 3600, 0},
    {"", "getvol", 0, 21},
    {"", "getbri", 0, 20},
	{"", "getbat", 120, 0},
	{"", "getdate", 3600, 0},
	{"", "getclock", 60, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " / ";
static unsigned int delimLen = 5;
