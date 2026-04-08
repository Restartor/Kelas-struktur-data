#include <iostream>

const int size = 3;

double Average(int nums[size]){
    double average = 0;
    for (int i = 0; i < size; i++)
    {
        average += nums[i];
    }
    return average / size;
    
    
}


void printarray(int arg[], int length){
    for (int n = 0; n < length; n++)
    {
        std::cout << arg[n] << " ";
        
    }

    std::cout << "\n";
}

int main(int argc, char** argv){

//   int numbers[3] = {10, 20, 30};
    int numbers[3];
    numbers[0] = 1;
    numbers[1] = 3;
    numbers[2] = 5;

// for print array

int firstLength;
int secondLength;
int firstarr[firstLength];
int secondarr[secondLength];

    std::cout << "enter the first array: ";
    for (int i = 0; i < firstLength; i++)
    {
        std::cin >> firstarr[i];
    }
    std::cout << "enter the second array: ";
    for (int i = 0; i < secondLength; i++)
    {
        std::cin >> secondarr[i];
    }



    std::cout << "the length of the first array you want to print: ";
    std::cin >> firstLength;

    std::cout << "the length of the second array you want to print: ";
    std::cin >> secondLength;

    if (firstLength > 5 || secondLength > 5)
    {
        std::cout << "Error: Array length exceeds 5." << std::endl;
        return 1;
    }
    

    std::cout << std::endl;
    std::cout << "the first array is: ";
    printarray(firstarr, firstLength);
    std::cout << "the second array is: ";
    printarray(secondarr, secondLength);

std::cout << std::endl;

// for average
    std::cout << "average: " << Average(numbers) << std::endl;

}