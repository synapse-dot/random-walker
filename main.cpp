#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

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

  for (int i = 0; i < num_steps; ++i) {
    /*
    Get a random direction 
    0 = up, 1 = right, 2 = down, 3 = left
    */
    direction = std::rand() % 4;

    // Update xPos and yPos accordingly
    int x = xPos.back();
    int y = yPos.back();
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

  // Write to path.txt
  std::ofstream pathLog("path.txt");

  for (std::size_t i = 0; i < xPos.size(); ++i) {
    if (pathLog.is_open()) {
      pathLog << xPos[i] << " " << yPos[i] << "\n";
    };
  };
  
  std::cout << "All positions written to path.txt\n"; 
  return 0;
}; 

