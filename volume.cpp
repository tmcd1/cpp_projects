/* volume.cpp
 *
 *   Given a length and a width, calculate a volume of a box with a given height
 */

#include<iostream>
using namespace std;

int main() {
  // Variables that will be used
  float length, width, height;

  length = 1; // Start off at 0

  // Get length and width from the user
  cout << "What is the height of the box? ";
  cin >> height;

  cout << "What is the width? ";
  cin >> width;

  // Keep getting heights and calculating volumes until the user
  //    signals a stop
  while (length != 0) {
    cout << "What is the length? (use 0 if done) ";
    cin >> length;

    if (length == 0) break;
    
    cout << "The volume is " << length*width*height << endl;
    
  }

}
