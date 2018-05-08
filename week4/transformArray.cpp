/*********************************
 ** Date: 4/25/18
 ** Author: Alex Cheng
 ** Description:
    This program is a function that transforms the given
    array into one that's twice as big with the values
    from the original array followed by each of those values plus one.
***********************************/
// #include <iostream>

/*******************************
 *       transformArray:
 This function takes in a reference to a pointer of array and
 an integer that's the size of the array and transforms the array.
 The function creates a new dynamically allocated array and puts
 the original values as well as the new values inside it. It then
 points the old array pointer to the new array address and frees
 the memory used by the old array.
 ******************************/

void transformArray(int *(&arrayPtr), int size) {
  // create new dynamically allocated array
  int *newArray = new int[2 * size];
  for (int i = 0; i < 2 * size; i++) {
    if (i < size) {
      // put original values in new array
      *(newArray + i) = *(arrayPtr + i);
    } else {
      // add new values to array
      *(newArray + i) = *(newArray + i - size) + 1;
    }
  }
  // free the memory allocated for the original array
  delete[] arrayPtr;
  // point the array to the new array
  arrayPtr = newArray;
}

// int main() {
//   int array[5] = {1, 2, 3, 4, 5};
//   int *myarray = new int[6];
//   myarray[0] = 4;
//   myarray[1] = 2;
//   myarray[2] = 3;
//   myarray[3] = 1;
//   myarray[4] = 0;
//   myarray[5] = -5;

//   transformArray(myarray, 6);
//   for (int i = 0; i < 12; i++) {
//     std::cout << *(myarray + i) << std::endl;
//   }
//   delete[] myarray;
// }
