#define UNICODE     //use unicode to make good-looking bar
#define BAR "\u2590"
#define ESC 0x1b
// constant definitions
enum COLORS {BLACK = 30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};

//functions prototype
void clearScreen(void);
void gotoxy(int row, int col);
void setColor(int color);
void dispBar(int col, double dB);
