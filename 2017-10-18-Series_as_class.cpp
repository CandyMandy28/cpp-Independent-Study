// Series Exercise
// 2017-10-04
// Amanda Wang

int searchArray(int array[], int target); 
// This iterates through an array from the beginning and 
// when it finds an element that is identical to target, 
// it returns the index of that element

int* searchPointer(int* array, int target);
// The same thing, but with pointers.  
// It should return a pointer to the element that matches the target

void copyArray(int source[], int size, int destination[]);
// Copies a source array with a given size into the destination array.

char* searchStrings (char** strings, char* targetString); 
// Takes an array of C-style strings and searches each one 
// to see if it contains a string identical to targetString. 
// Return a pointer to the first string that matches.

int searchArray(int array[], int target)
{
    int count = 0;
    // iterate through array
    for(int i : array)
    {  
        // check if matching int
        if(target == i)
        {
            return count;
        }
        ++count;
    }
    // return -1;
}

int* searchPointer(int* array, int target)
{
    // iterate through array
    for(int i : array)
    {
        // check if matching pointers
        if(target == *i)
        {
            return i;
        }
    }
    // return -1;
}

void copyArray(const int source[], int size, int destination[])
{
    for(int i = 0; i < size; i++)
    {
        destination[i] = source[i];
    }
}

char* searchStrings (char** strings, char* targetString)
{
    // // iterate through array
    // for(int i : array)
    // {
    //     // check if matching pointers
    //     if(&target == &&i)
    //     {
    //         return i;
    //     }
    // }
    // return '\0';
    for(;; ++strings)
    {
        for (const char* sourcePointer = *strings;
             *sourcePointer != '\0'; ++sourcePointer)
        {
            const char* tempPointer = sourcePointer;
            const char* target = targetString;

            while(*target == *tempPointer)
            {
                ++tempPointer;
                ++target;
                if(*target =='\0')
                    return *strings;
            }
        }
    }
}

// void scream()
// {
    // scream forever
//     for(;;)
//     {
//         std::cout >> "A"
//     }
// }