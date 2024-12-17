// ПРИМЕЧАНИЕ: КОД СЛЕДУЕТ ЗАПУСКАТЬ НА САЙТЕ replit.com

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
int SQR = 10;

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


// can work
// ⬛️
// ⬜️
// 🟥
// 🟧
// 🟨
// 🟩
// 🟦
// 🟪
// 🟫

void defWin(){
  cout << "\x1B[2J\x1B[H";
  string mapGameBase[10][10] = {
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","🟨","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","🟨","⬜️"},
  {"⬜️","🟨","🟨","⬜️","🟨","🟨","⬜️","🟨","🟨","⬜️"},
  {"⬜️","🟨","🟨","⬜️","🟨","🟨","⬜️","🟨","🟨","⬜️"},
  {"⬜️","🟨","🟨","🟨","🟨","🟨","🟨","🟨","🟨","⬜️"},
  {"⬜️","🟨","🟨","🟨","🟥","🟥","🟨","🟨","🟨","⬜️"},
  {"⬜️","🟨","🟨","🟨","🟥","🟥","🟨","🟨","🟨","⬜️"},
  {"⬜️","🟨","🟨","🟨","🟥","🟥","🟨","🟨","🟨","⬜️"},
  {"⬜️","⬜️","🟨","🟨","🟨","🟨️","🟨️","🟨","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  };
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      cout<<mapGameBase[i][j];
    }
    cout<<endl;
  }
  cout<<"You Win!"<<endl;
  exit(0);
}


int main() {
  string mapGameBase[10][10] = {
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","🟫","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  };

  int countBroun = 0;
  
  
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      if(mapGameBase[i][j] == "🟫"){
        countBroun++;
      }
    }
  }
  int optX = 1;
  int optY = 1;
  string mapGame[SQR][SQR];
  while (true) {
    int countGreen = 0;
    for (int i = 0; i < SQR; i++) {
      for (int j = 0; j < SQR; j++) {
        mapGame[i][j] = mapGameBase[i][j];
        if(mapGameBase[i][j] == "🟩"){
          countGreen++;
        }

        if(countBroun == countGreen){
          defWin();
        }
        
        
        mapGame[optY][optX] = "⬛️";
        cout<< mapGame[i][j];
      }
      cout << endl;
    }

    int key = getch();
    cout<<key;
    switch (key) {
    case 32:
      if(mapGameBase[optY][optX] == "🟫"){
        mapGameBase[optY][optX] = "🟩";
      }

      cout << "\x1B[2J\x1B[H";
      break;

    case 119://key w
      if (optY > 0) {
        optY--;
      }
      cout << "\x1B[2J\x1B[H";
      break;

    case 115://key s
      if (optY < 9) {
        optY++;
      }
      cout << "\x1B[2J\x1B[H";
      break;

    case 97://key a
      if (optX > 0) {
        optX--;
      }
      cout << "\x1B[2J\x1B[H";
      break;

    case 100://key d
      if (optX < 9) {
        optX++;
      }
      cout << "\x1B[2J\x1B[H";
      break;

    default:
      break;
    }
  }

  return 0;
}
