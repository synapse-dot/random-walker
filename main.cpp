#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  // Set origin Co-ordinates
  int x = 0;
  int y = 0;
  int num_steps = 0;
  // Seed with current time
  std::srand(std::time(0));
  std::cout << "How many steps to take: ";
  std::cin >> num_steps;
  for (int i = 0; i < num_steps; ++i) {
    // Get a random direction 
    // 0 = up, 1 = right, 2 = down, 3 = left
    int directionNum = std::rand() % 4;
    switch (directionNum) {
      case 0:
        y++;
        break;
      case 1:
        x++;
        break;
      case 2:
        y--;
        break;
      default:
        x--;
        break;
    };
    std::cout << "Updated position to (" << x << ", " << y << ").\n";
  };
  return 0;
};
