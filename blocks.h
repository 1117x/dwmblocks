//Modify this file to change what commands output to your statusbar, and recompile using the make command.

#define WIDGET_PATH "/home/frederik/bin/dwmblocks/status/"

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

  {"Volume: ", WIDGET_PATH "volume",          0,    1},
  {"",         WIDGET_PATH "battery",         10,   0},
  {"",         WIDGET_PATH "bandwidth",       1,    0},
  {"",         WIDGET_PATH "memory",          5,    0},
  {"",         WIDGET_PATH "cpu",             5,    0},
  {"",         WIDGET_PATH "internet",        10,   0},
	{"",         "date '+%a %d %b %Y %H:%M'",		60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
