#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int main() {
  // Set origin Co-ordinates
  std::vector<int> xPos;
  std::vector<int> yPos;

  xPos.push_back(0);
  yPos.push_back(0);

  int num_steps;
  int direction;

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
        xPos.push_back(xPos[i]);
        yPos.push_back(yPos[i]+1);
        break;
      case 1:
        xPos.push_back(xPos[i]+1);
        yPos.push_back(yPos[i]);
        break;
      case 2:
        xPos.push_back(xPos[i]);
        yPos.push_back(yPos[i]-1);
        break;
      case 3:
        xPos.push_back(xPos[i]-1);
        yPos.push_back(yPos[i]);
        break;
      default:
        std::cout << "Error";
    };
  };

  for (std::size_t i = 0; i < xPos.size(); ++i) {
    std::cout << "(" << xPos[i] << ", " << yPos[i] << ")\n";
  };

  std::cout << "Final position: (" << xPos.back() << ", " << yPos.back() << ")\n";
  return 0;
}; 

