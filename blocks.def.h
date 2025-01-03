//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	//{"󰂄 ", "cat /sys/class/power_supply/BAT1/capacity",					300,		0},

	{"", "~/suckless/dwmblocks/scripts/dwm_battery.sh",					5,		35},

	{"  ", "amixer get Master | awk -F'[][]' '/Left:/ {print $2}'",					1,		10},

	{"", "~/suckless/dwmblocks/scripts/dwm_weather.sh",					900,		36},

	{"", "~/suckless/dwmblocks/scripts/wlnet.sh",					5,		37},

	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},

};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
