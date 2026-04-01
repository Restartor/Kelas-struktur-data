#include <iostream>

const int size = 3;

double Average(int nums[size])
{
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
int firstarr[] = {1,2,3,4,5};
int secondarr[] = {6,7,8,9,10};

    std::cout << "the first array is ";
    printarray(firstarr, 5);
    std::cout << "the second array is ";
    printarray(secondarr, 5);

std::cout << std::endl;

    std::cout << "hello the average is " << Average(numbers) << std::endl;

}