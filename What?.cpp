#include <algorithm>
#include <chrono>
#include <iostream>
#include <string>
#include <termios.h>
#include <thread>
#include <unistd.h>
#include <vector>
using namespace std;

class ConAr {
private:
  int selectedOption = 0;
  vector<string> options;
  int numOptions = options.size();

public:
  ConAr(vector<string> opt) : options(opt){};
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
  int gnop() { return numOptions; }
  vector<string> gvp() { return options; }
  int gsop() { return selectedOption; }
  void up() {
    cout << "\x1B[2J\x1B[H";
    selectedOption = (selectedOption - 1 + numOptions) % numOptions;
  }
  void down() {
    cout << "\x1B[2J\x1B[H";
    selectedOption = (selectedOption + 1) % numOptions;
  }
  void printOptions() {
    for (int i = 0; i < numOptions; i++) {
      if (i == selectedOption) {

        cout << "\033[1;33m> " << options[i] << "\033[0m" << endl;
      } else {
        cout << "  " << options[i] << endl;
      }
    }
  }
};

int main() {
  ConAr sm({"Option 1",
            "Option 2",
            "Option 3",
            "Exit"});
  bool teru = true;
  while (teru) {
    sm.printOptions();
    int key = sm.getch();
    switch (key) {
    case 99: // c - enter
      cout << "\x1B[2J\x1B[H";
      if (sm.gsop() == 0) {
        cout << "You selected: " << sm.gvp()[0] << endl;
      } else if (sm.gsop() == 1) {
        cout << "You selected: " << sm.gvp()[1] << endl;
      } else if (sm.gsop() == 2) {
        cout << "You selected: " << sm.gvp()[2] << endl;
      } else if (sm.gsop() == 3) {
        cout << "You selected: " << sm.gvp()[3] << endl;
        teru = false;
        break;
      }
      break;

    case 122: // z - up
      sm.up();
      break;

    case 120: // x - down
      sm.down();
      break;

    default:
      break;
    }
  }
  return 0;
}
