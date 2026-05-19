#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
  // Set origin Co-ordinates
  int x = 0;
  int y = 0;

  int num_steps;
  int direction;
  std::string directionStr;

  // Seed with current time
  std::srand(std::time(0));

  std::cout << "How many steps to take: ";
  std::cin >> num_steps;

  for (int i = 0; i < num_steps; ++i) {
    /*
    Get a random direction 
    0 = up, 1 = right, 2 = down, 3 = left
    */
    direction = std::rand() % 4;
    switch (direction) {
      case 0:
        y++;
        directionStr = "UP";
        break;
      case 1:
        x++;
        directionStr = "RIGHT";
        break;
      case 2:
        y--;
        directionStr = "DOWN";
        break;
      case 3:
        x--;
        directionStr = "LEFT";
        break;
      default:
        std::cout << "Error";
    };

    std::cout << "Step "  << i+1 << ": Moved " << directionStr << " to (" << x << ", " << y << ").\n";

  };
  std::cout << "Final position: (" << x << ", " << y << ")\n";
  return 0;
};
