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
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;

// for print array
int firstarr[5];
int secondarr[5];
int firstLength;
int secondLength;

    std::cout << "enter the first array: ";
    for (int i = 0; i < 5; i++)
    {
        std::cin >> firstarr[i];
    }
    std::cout << "enter the second array: ";
    for (int i = 0; i < 5; i++)
    {
        std::cin >> secondarr[i];
    }



    std::cout << "the length of the first array you want to print: ";
    std::cin >> firstLength;

    std::cout << "the length of the second array you want to print: ";
    std::cin >> secondLength;

    std::cout << std::endl;
    std::cout << "the first array is: ";
    printarray(firstarr, firstLength);
    std::cout << "the second array is: ";
    printarray(secondarr, secondLength);

std::cout << std::endl;

// for average
    std::cout << "hello the average is " << Average(numbers) << std::endl;

}