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
int SQR = 27;
std::chrono::milliseconds stop(500);
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

// can't work (IDK why ._.)
// 🟥
// 🟧
// 🟨
// 🟩
// 🟦
// 🟪
// 🟫

void def_win_user(){
  cout << "\x1B[2J\x1B[H";
  string user_win[27][27] = {
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬛️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬜️","⬛️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬛️","⬛️","⬜️","⬛️","⬛️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬛️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️"},
    {"⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️"},
    {"⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬛️","⬛️","⬜️"},
    {"⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️"},
    {"⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬛️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️"},
    {"⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬛️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
    {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"}};

  for(int i = 0; i < SQR; i++){
    for(int j = 0; j < SQR; j++){
      cout << user_win[i][j];
    }
    std::this_thread::sleep_for(stop);
    cout<<endl;
  }
}

void LEVEV_1(){
  string level_1[27][27] = {
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","🟩️","🟩️","🟩","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","🟩️","🟩️","🟩️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","🟩️","🟩️","🟩","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"}
};
  int userPositionX = 1;
  int userPositionY = 1;
  
  int finPositionX = 23;
  int finPositionY = 10;
  
  int tempObjectPositionX = 12;
  int tempObjectPositionY = 10;
  string mapGame[SQR][SQR];
  while (true) {
    for (int i = 0; i < SQR; i++) {
      for (int j = 0; j < SQR; j++) {
        mapGame[i][j] = level_1[i][j];

        mapGame[userPositionY][userPositionX] = "⬛️";
        mapGame[userPositionY][userPositionX+1] = "⬛️";
        mapGame[userPositionY][userPositionX+2] = "⬛️";

        mapGame[userPositionY+1][userPositionX] = "⬛️";
        mapGame[userPositionY+1][userPositionX+1] = "⬛️";
        mapGame[userPositionY+1][userPositionX+2] = "⬛️";

        mapGame[userPositionY+2][userPositionX] = "⬛️";
        mapGame[userPositionY+2][userPositionX+1] = "⬛️";
        mapGame[userPositionY+2][userPositionX+2] = "⬛️";

        mapGame[tempObjectPositionY][tempObjectPositionX] = "🟥";
        mapGame[tempObjectPositionY][tempObjectPositionX+1] = "🟥";
        mapGame[tempObjectPositionY][tempObjectPositionX+2] = "🟥";

        mapGame[tempObjectPositionY+1][tempObjectPositionX] = "🟥";
        mapGame[tempObjectPositionY+1][tempObjectPositionX+1] = "🟥";
        mapGame[tempObjectPositionY+1][tempObjectPositionX+2] = "🟥";

        mapGame[tempObjectPositionY+2][tempObjectPositionX] = "🟥";
        mapGame[tempObjectPositionY+2][tempObjectPositionX+1] = "🟥";
        mapGame[tempObjectPositionY+2][tempObjectPositionX+2] = "🟥";

        cout<< mapGame[i][j];
      }
      cout << endl;
    }
    if((finPositionX == tempObjectPositionX)and(finPositionY == tempObjectPositionY)){
      std::this_thread::sleep_for(stop);
      def_win_user();
      break;
    }


    int key = getch();
    cout<<key;
    switch (key) {
      case 10:
        cout << "\x1B[2J\x1B[H";
        break;

      case 119://key w
        if ((userPositionY > 0) and (tempObjectPositionY!=0)){
          userPositionY--;
          if(tempObjectPositionY>0){
            if(
              (userPositionX == tempObjectPositionX)and(userPositionY == tempObjectPositionY+2) or
              (userPositionX+1 == tempObjectPositionX)and(userPositionY == tempObjectPositionY+2) or
              (userPositionX+2 == tempObjectPositionX)and(userPositionY == tempObjectPositionY+2) or

              (userPositionX == tempObjectPositionX+1)and(userPositionY == tempObjectPositionY+2) or
              (userPositionX+1 == tempObjectPositionX+1)and(userPositionY == tempObjectPositionY+2) or
              (userPositionX+2 == tempObjectPositionX+1)and(userPositionY == tempObjectPositionY+2) or

              (userPositionX == tempObjectPositionX+2)and(userPositionY == tempObjectPositionY+2) or
              (userPositionX+1 == tempObjectPositionX+2)and(userPositionY == tempObjectPositionY+2) or
              (userPositionX+2 == tempObjectPositionX+2)and(userPositionY == tempObjectPositionY+2)){
              tempObjectPositionY--;
            }
          }
        }
        cout << "\x1B[2J\x1B[H";
        break;

      case 115://key s
        if ((userPositionY < SQR-3)and(tempObjectPositionY< SQR-3)) {
          userPositionY++;
          if(
            (userPositionX == tempObjectPositionX)and(userPositionY+2 == tempObjectPositionY) or
            (userPositionX+1 == tempObjectPositionX)and(userPositionY+2 == tempObjectPositionY) or
            (userPositionX+2 == tempObjectPositionX)and(userPositionY+2 == tempObjectPositionY) or
    
            (userPositionX == tempObjectPositionX+1)and(userPositionY+2 == tempObjectPositionY) or
            (userPositionX+1 == tempObjectPositionX+1)and(userPositionY+2 == tempObjectPositionY) or
            (userPositionX+2 == tempObjectPositionX+1)and(userPositionY+2 == tempObjectPositionY) or
    
            (userPositionX == tempObjectPositionX+2)and(userPositionY+2 == tempObjectPositionY) or
            (userPositionX+1 == tempObjectPositionX+2)and(userPositionY+2 == tempObjectPositionY) or
            (userPositionX+2 == tempObjectPositionX+2)and(userPositionY+2 == tempObjectPositionY)){
            tempObjectPositionY++;
          }
        }
        cout << "\x1B[2J\x1B[H";
        break;

      case 97://key a
        if ((userPositionX > 0)and(tempObjectPositionX>0)) {
          userPositionX--;
          if(
            (userPositionY == tempObjectPositionY)and(userPositionX == tempObjectPositionX+2) or
            (userPositionY+1 == tempObjectPositionY)and(userPositionX == tempObjectPositionX+2) or
            (userPositionY+2 == tempObjectPositionY)and(userPositionX == tempObjectPositionX+2) or

            (userPositionY == tempObjectPositionY+1)and(userPositionX == tempObjectPositionX+2) or
            (userPositionY+1 == tempObjectPositionY+1)and(userPositionX == tempObjectPositionX+2) or
            (userPositionY+2 == tempObjectPositionY+1)and(userPositionX == tempObjectPositionX+2) or

            (userPositionY == tempObjectPositionY+2)and(userPositionX == tempObjectPositionX+2) or
            (userPositionY+1 == tempObjectPositionY+2)and(userPositionX == tempObjectPositionX+2) or
            (userPositionY+2 == tempObjectPositionY+2)and(userPositionX == tempObjectPositionX+2)){
            tempObjectPositionX--;
          }
        }
        cout << "\x1B[2J\x1B[H";
        break;

      case 100://key d
        if ((userPositionX < SQR-3)and(tempObjectPositionX < SQR-3)) {
          userPositionX++;
          if(
            (userPositionY == tempObjectPositionY)and(userPositionX+2 == tempObjectPositionX) or
            (userPositionY+1 == tempObjectPositionY)and(userPositionX+2 == tempObjectPositionX) or
            (userPositionY+2 == tempObjectPositionY)and(userPositionX+2 == tempObjectPositionX) or
            
            (userPositionY == tempObjectPositionY+1)and(userPositionX+2 == tempObjectPositionX) or
            (userPositionY+1 == tempObjectPositionY+1)and(userPositionX+2 == tempObjectPositionX) or
            (userPositionY+2 == tempObjectPositionY+1)and(userPositionX+2 == tempObjectPositionX) or
            
            (userPositionY == tempObjectPositionY+2)and(userPositionX+2 == tempObjectPositionX) or
            (userPositionY+1 == tempObjectPositionY+2)and(userPositionX+2 == tempObjectPositionX) or
            (userPositionY+2 == tempObjectPositionY+2)and(userPositionX+2 == tempObjectPositionX)){
            tempObjectPositionX++;
          }
        }
        cout << "\x1B[2J\x1B[H";
        break;

      default:
        break;
    }
  }
}



int main() {
  LEVEV_1();

  return 0;
}



