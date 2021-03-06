//Modify this file to change what commands output to your statusbar, and recompile using the make command.

#define WIDGET_PATH "/home/frederik/bin/dwmblocks/status/"

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

  {" ",         WIDGET_PATH "volume",          60,   1},
  {"",         "/home/frederik/.zsh/scripts/dmenu-bluetooth --status",
                                                60,   4},
  /* {"",         WIDGET_PATH "cmus_status",       60,   2}, */
  {"",         WIDGET_PATH "mail",              60,   3},
  {"",         WIDGET_PATH "battery",           10,   0},
  /* {"",         WIDGET_PATH "bandwidth",       1,    0}, */
  /* {"",         WIDGET_PATH "memory",          5,    0}, */
  /* {"",         WIDGET_PATH "cpu",             5,    0}, */
  {"",         WIDGET_PATH "internet",          10,   0},
  /* {"泌 ",         WIDGET_PATH "ip",              60,   0}, */
	 {"  ",       "date '+%a. %d. %B %Y'",		    60,		0},
	 {" ",       "date '+%H:%M'",       		      60,		0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
