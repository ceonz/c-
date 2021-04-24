#include "MemoryGame.hpp"
#include <cstdlib> //srand, rand
#include <ctime>
#include <iomanip>  //setw
#include <iostream> //std
using namespace std;

int* randomize(int numSpaces); //function to randomize layout
void swap(int* arr, int i, int j);
void displaySeparateLine(int numSpaces);

//TODO: implement by students
MemoryGame::MemoryGame() //default constructor,
                         //set numPairs = 3, numSpaces = 2 * numPairs + 2,
                         //put 3 pairs of randomly generated ints in [0, 1000)
                         //randomly in numSpaces blocks.
                         //Note that 2 added after 2 * numPairs means number of
                         //two extra blocks without actual data.
{
  // srand(time(NULL)); //TODO: uncomment this line to see
  //different layouts of numbers in different runnings.
  //time(NULL) is the current running time.
  //use the current running time to grow random sequence
  //Since running time differs,
  //the random sequence looks different
  //at different running time.
  srand(1); //TODO: add this before submitting to gradescope,
  //or autograde script cannot handle random input.

  //TODO: your code here
  this->numPairs = 3;
  this->numSpaces = 2 * this->numPairs + 2;

  // int *arr = randomize(this->numSpaces);
  // for (int i = 0; i < this->numPairs * 2; i += 2) {
  //   string value = to_string(rand() % 1000);
  // }

  string* randNumbs // [807, 249, 73]
    = (string*)malloc(sizeof(string) * this->numPairs);
  for (int i = 0; i < this->numPairs; ++i) {
    randNumbs[i] = to_string(rand() % 1000);
    // cout << randNumbs[i] << endl;
  }

  int* index = randomize(this->numSpaces); // [0, 1, 3, 5, 4, 7, 6, 2]
  // for (int i = 0; i < this->numSpaces; ++i) {
  //   cout << index[i] << endl;
  // }

  // randNumbs = [807, 249, 73]
  // index = [0, 1, 3, 5, 4, 7, 6, 2]
  this->values = new string[this->numSpaces];
  for (int i = 0; i < this->numSpaces; ++i) {
    if (i < this->numPairs * 2) { // [0, 6)
      this->values[index[i]] = randNumbs[i / 2];
      this->values[index[i + 1]] = randNumbs[i / 2];
    }
    else {
      this->values[index[i]] = "";
    }
  }
  free(randNumbs);
  free(index);
}

//TODO: implement by students
MemoryGame::~MemoryGame() {
  //When an object is no longer in need,
  //release dynamically allocated memory by
  //data members of the current object.
  delete[] this->values;
  this->values = nullptr;
}

//TODO: implement by students
//randomize is not a member function,
//so there is no MemoryGame:: before function name randomize.
//Return an array of randomly allocated 0, 1, .., size-1
//In constructors, randomly assign the data in dataVector
//to array values
int* randomize(int size) {
  //idea to randomize 0, 1, 2, 3, 4, 5,
  //generate a random int in [0, 6), say 3,
  //then move arr[3] to the end,
  //say, 0, 1, 2, 5, 4, 3
  //generate a random int in [0, 5), say 3 again,
  //then swap arr[3], which is 5 now, with arr[4],
  //get 0, 1, 2, 4, 5, 3
  //generate a random int in [0, 4), say 2,
  //swap arr[2] with the current arr[3]
  //get 0, 1, 4, 2, 5, 3
  //continue to randomize arr[0..2].
  //afterwards, continue to randomize arr[0..1].
  int* arr = (int*)malloc(sizeof(int) * size);
  for (int i = 0; i < size; ++i) {
    arr[i] = i;
  }
  for (int i = size; i > 0; --i) {
    int randNum = rand() % i;
    swap(arr, randNum, i - 1);
  }
  return arr;
}

//TODO: implement by students
//int* arr means int array arr, which implies the address
//of the first element of array arr.
//swap arr[i] and arr[j] in array of ints arr.
void swap(int* arr, int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

//Display -----+ for numSpaces times.
//Add an extra + when for the first block (when index i is 0).
//So suppose numSpaces is 8, we get
//+-----+-----+-----+-----+-----+-----+-----+-----+
//followed by a new line.
void displaySeparateLine(int numSpaces) {
  for (int i = 0; i < numSpaces; i++) {
    if (i == 0)
      cout << "+";
    cout << "-----+";
  }
  cout << endl;
}

//TODO: implement by students
//display the items in values array where bShown is true.
void MemoryGame::display(bool* bShown) {
  cout << " ";
  for (int i = 0; i < this->numSpaces; ++i) {
    cout << setw(3) << i;
    cout << setw(3) << " ";
  }
  cout << "\n";
  displaySeparateLine(this->numSpaces);
  cout << "|";
  for (int i = 0; i < this->numSpaces; ++i) {
    if (bShown[i]) {
      cout << setw(5) << this->values[i];
    }
    else {
      cout << setw(5) << "";
    }
    cout << "|";
  }
  cout << "\n";
  displaySeparateLine(this->numSpaces);
}

//TODO: implement by students
//rules for a round
//(1) pick a number, flip it
//(2) pick a second number, if the number is the same as
//    previous pick, display the second number,
//    otherwise, unflip the previous pick.
//(3) Finish until every pair are chosen correctly.
void MemoryGame::play() {
  bool* bShown = new bool[this->numSpaces];
  for (int i = 0; i < this->numSpaces; ++i) {
    bShown[i] = false;
  }
  int pairsFound = 0;
  int numFlips = 0;
  int first = -1;
  int index;
  // setenv("TERM", "${TERM:-dumb}", false);
  this->display(bShown);
  while (pairsFound < numPairs) {
    // system("clear");
    cout << "Pick a cell to flip: ";
    cin >> index;
    while (index < 0 or index >= this->numSpaces or bShown[index]) {
      if (bShown[index]) {
        cout << "The cell indexed at " << index << " is shown."
          << "\n";
      }
      else {
        cout << "index needs be in range of [0, " << this->numSpaces - 1 << "]."
          << "\n";
      }
      cout << "Re-enter an index: ";
      cin >> index;
    }

    if (first == -1) { // first flip
      bShown[index] = true;
      first = index;
    }
    else { // second flip
      if (this->values[first] == this->values[index]) {
        if (this->values[index] != "") {
          bShown[index] = true;
          pairsFound += 1;
          first = -1;
        }
      }
      else {
        bShown[first] = false;
        first = -1;
      }
    }
    numFlips += 1;
    this->display(bShown);
  }
  cout << "Congratulations! Take " << numFlips
    << " steps to find all matched pairs."
    << "\n";
  delete[] bShown;
  bShown = nullptr;
}
