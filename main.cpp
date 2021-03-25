
// Fig. 8.13: fig08_13.cpp
// Selection sort with pass-by-reference. This program puts values into an 
// array, sorts them into ascending order and prints the resulting array.
#include <iostream> 
#include <iomanip>
using namespace std;

template <typename T>
void selectionSort(T * const array, int size  ); // prototype
template <typename T>
void swap( T * const, T * const ); // prototype
template<typename T>
void print_array(T * const array, int size );//prototype

int main()
{
    //Creating and working with the array of integers
    //Getting the size
    int arraySize_1;
    cout << "Pls enter the size of your array of integers" << endl;
    cin >> arraySize_1;

    //Setting constant the value of the size in order to keep it inaccesible
    const int size_1= arraySize_1;
    int a[size_1];
    
    //Asking the user to input its values
    cout << "Now enter the values of your array: " << endl;
    for(int i=0; i< size_1;++i){
        cout << "a"<< i+1 << ":"<< endl;
        cin >> a[i];
    }
    selectionSort(a, size_1); // sort the array of integers



    //Now it is turn of the array of floats
    //Creating and working with the array of floats
    //Getting the size
    int arraySize_2;
    cout << "Pls enter the size of your array of floats" << endl;
    cin >> arraySize_2;

    //setting constant the variable of the size
    const int size_2= arraySize_2;
    
    //Creating the array of floats
    float b[size_2];
    
    //Making the user to input its values 
    cout << "Now enter the values of your array: " << endl;
    for(int j=0; j< size_2;++j){
        cout << "b"<< j+1 << ":"<< endl;
        cin >> b[j];
    }

    selectionSort(b, size_2); // sort the array of floats

    //Using the print function to print both arrays
    cout << "The value of the array of integers is:";
    print_array( a, size_1);

    cout << "The value of the array of floats is:";
    print_array( b, size_2);

    

//end main
}

// function to sort an array
template <typename T>
void selectionSort( T * const array, int size )
{
   int smallest; // index of smallest element

   // loop over size - 1 elements
   for ( int i = 0; i < size - 1; ++i )
   {
      smallest = i; // first index of remaining array

      // loop to find index of smallest element
      for ( int index = i + 1; index < size; ++index )

         if ( array[ index ] < array[ smallest ] )
            smallest = index;

      swap( &array[ i ], &array[ smallest ] );
   } // end if
} // end function selectionSort

// swap values at memory locations to which
// element1Ptr and element2Ptr point
template <typename T>
void swap( T * const element1Ptr, T * const element2Ptr )
{
   T hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
} // end function swap

// function to print the values of the arrays
template <typename T>
void print_array(T * const array, int size ){

    cout << endl;
    for(int i=0; i< size; ++i){
        cout << array[i] << " ";
    }
    cout << endl;
}
