// constant definitions
#define ESC 0x1B
enum COLORS {BLACK=30, RED, GREEN, YELLOW, BLUE, MAGNETA, CYAN, WHITE};

//functions prototypes
void clearScreen(void);
void gotoxy(int row, int col);
void setColor(int color);
void dispBar(int col, double dB);
