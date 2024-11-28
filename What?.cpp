#include <chrono>
#include <iostream>
#include <string>
#include <termios.h>
#include <thread>
#include <unistd.h>
#include <vector>
using namespace std;
// vector<int> ttm;
// cout << "\x1B[2J\x1B[H";
string mapGame[10][10] = {
{"[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]"},
{"[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]"},
{"[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]"},
{"[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]"},
{"[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]"},
{"[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]"},
{"[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]"},
{"[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]"},
{"[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]"},
{"[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]", "[-]"}};
int getch() {
  struct termios oldt, newt;
  int ch;
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  ch = getchar();
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  return ch;
}

int main() {

  int optX = 0;
  int optY = 0;
  while (true) {
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        mapGame[optX][optY] = "[-]";
        if((i == optX) and (j == optY)){
          mapGame[optX][optY] = "[+]";
          cout <<" \033[1;33m  " << mapGame[i][j] <<"\033[0m";
        }
        else{
          cout << "   " << mapGame[i][j];
        }
      }
      cout << endl;
      cout << endl;
    }

    int key = getch();
    switch (key) {
    case 10:
      cout << "\x1B[2J\x1B[H";
      break;

    case 119://key w
      if (optX > 0) {
        optX--;
      }
      cout << "\x1B[2J\x1B[H";
      break;

    case 115://key s
      if (optX < 9) {
        optX++;
      }
      cout << "\x1B[2J\x1B[H";
      break;

    case 97://key a
      if (optY > 0) {
        optY--;
      }
      cout << "\x1B[2J\x1B[H";
      break;

    case 100://key d
      if (optY < 9) {
        optY++;
      }
      cout << "\x1B[2J\x1B[H";
      break;

    default:
      break;
    }
  }

  return 0;
}


