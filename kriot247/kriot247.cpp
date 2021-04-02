/*
Date: 3/10/21
Author: Wayne Kwiat
Description:
This program can be used to gather statistical data about the number of movies college students see in a month. The program should perform the following steps:
Ask the user how many students were surveyed. An array of integers with this many elements should then be dynamically allocated.
Allow the user to enter the number of movies each student saw into the array.
Calculate and display the average, median, and mode of the values entered.
*/

#include <iostream>
using namespace std;

// Function prototypes
void sortArray(int[], int);
void showArray(const int[], int);
double findMedian(int[], int);
int findMode(int a[], int Number_Elements);


int main()
{
    int* movie = nullptr,
        totalMovies = 0,
        numStudents,
        average,
        //mode,
        //median,
        row = 1,
        count;

    // Get the number of students
    cout << "How many students are in the survey? ";
    cin >> numStudents;
    if (numStudents > -1) {
        // Dynamically assign the array of students
        movie = new int[numStudents];
    }
    else {
        cout << "Please enter a positive number: ";
        cin >> numStudents;
        movie = new int[numStudents];
    }

    // Enter movies for each student
    cout << "Enter the movies seen by each student?\n";
    for (count = 0; count < numStudents; count++)
    {
        cout << "Student " << (count + 1) << ": ";
        cin >> movie[count];
        totalMovies += movie[count]; //Calculate total movies seen by the students
        average = totalMovies / numStudents;
    }

    // Display  totals
    cout << "\nTotal students: " << numStudents << endl;
    cout << "\nTotal movies: " << totalMovies << endl;
    cout << "\nAverage number of movies seen: " << average << endl;

    sortArray(movie, numStudents);

    cout << "The median value = " << findMedian(movie, numStudents) << endl;
    cout << "The mode value = " << findMode(movie, numStudents) << endl;

    // Free dynamically allowed memory
    delete[] movie;
    movie = nullptr;

    return 0;
}

//***********************************************************
// Definition of function sortArray                         *
// This function performs an ascending order bubble sort on *
// array. size is the number of elements in the array.      *
//***********************************************************

void sortArray(int array[], int size)
{
    bool swap;
    int temp;

    do
    {
        swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
            if (array[count] > array[count + 1])
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}

void showArray(const int array[], int size)
{
    for (int count = 0; count < size; count++)
        cout << array[count] << " ";
    cout << endl;
}

//*******************************************
// Definition of findMedian() function.      *
//*******************************************
double findMedian(int a[], int n)
{
    // check for even case 
    if (n % 2 != 0)
        return (double)a[n / 2];

    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}

//*******************************************
// Definition of findMode() function.      *
//*******************************************
int findMode(int a[], int n)
{
    int counter;    // To hold the value of number of appearances
    int maximum = 0;    // To hold the value of maximum number of appearances
    int mode;
    // Create a loop to loop through the pointer array values
    for (int i = 0; i < n; i++)
    {
        // Reset the value of counter at the start of each iteration
        counter = 0;
        // Create a second loop to compare the pointer array values of *(Array + i) to *(Array + j)
        for (int j = i; j < n; j++)
        {
            if ((a[i]) == (a[j]))
                counter++;                      // Increment counter if the values are equal
            if (counter > maximum)
            {
                maximum = counter;              // Set counter to the maximum appearance value.
                // Make mode point to the current mode
                mode = a[i];
            }
        }
    }

    // If the maximum number of appearances is 1 then return -1
    if (maximum == 1)
        return -1;
    return mode;
}
