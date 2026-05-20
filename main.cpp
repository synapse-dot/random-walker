#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int main() {
  // Set origin Co-ordinates
  std::vector<int> xPos, yPos;

  xPos.push_back(0);
  yPos.push_back(0);

  int num_steps;
  int direction;

  // Seed with current time
  std::srand(std::time(0));

  std::cout << "How many steps to take: ";
  std::cin >> num_steps;

  int x, y;

  for (int i = 0; i < num_steps; ++i) {
    /*
    Get a random direction 
    0 = up, 1 = right, 2 = down, 3 = left
    */
    direction = std::rand() % 4;

    // Update xPos and yPos accordingly
    x = xPos.back();
    y = yPos.back();
    switch (direction) {
      case 0: y++; break;
      case 1: x++; break;
      case 2: y--; break;
      case 3: x--; break;
      default: std::cout << "Error";
    };

    xPos.push_back(x);
    yPos.push_back(y);
  };

  for (std::size_t i = 0; i < xPos.size(); ++i) {
    std::cout << "(" << xPos[i] << ", " << yPos[i] << ")\n";
  };

  std::cout << "Final position: (" << xPos.back() << ", " << yPos.back() << ")\n";
  return 0;
}; 

