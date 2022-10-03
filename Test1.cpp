#include <iostream>

int Random(int MIN, int MAX) 
{
    return rand() % (MAX - MIN) + MIN;
}


void Swap(int &n1, int &n2) 
{
    int t = n1;
    n1 = n2;
    n2 = t;
}

/*
void Short(int *_array, int _length) {

    for(int i = 0; i < _length; i++)
        Swap(_array[i], _array[MinIndex(_array, i, _length)]);

}

int MinIndex(int *_array, int _start, int _length) {

    int _index = _start;
    
    for(int i = _index+1; i < _length; i++) 
        if(_array[i] < _array[_index])
            _index = i;

    return _index;

}
*/

void FillRandom(int *array, int MIN, int MAX, int length) 
{
    for(int i = 0; i < length; i++) 
        array[i] = Random(MIN, MAX);
}

void UserFillArray(int *array, int length) {

    for(int i = 0; i < length; i++) {
        
        std::cout << "Enter the value n " << i+1 << " of the array: ";
        std::cin >> array[i]; 

    }

}

int GetBufferInput(char *buffer, int maxLength) {

    int length = 0;

    for(int i = 0; i < maxLength; i++) {

        char tmp = std::getchar();

        if((int)tmp == 10)
            break;

        buffer[i] = tmp;
        length++;

    }

    return length;

}

void PrintArray(int *array, int length) {

    std::cout << "[";
    for(int i = 0; i < length; i++) {

        std::cout << array[i] << ((i != length-1) ? (", ") : (""));

    }
    std::cout << "]" << std::endl;

}

void ShuffleArray(int *array, int length) {

    for(int i = 0; i < length; i++)
        array[i] = array[Random(0, length-1)];


}

void CopyArray(char *arrayCopy, char *arrayBase, int length) {

    for(int i = 0; i < length; i++)
        arrayCopy[i] = arrayBase[i];

}

int MaxIndex(int *array, int length) {

    int index = 0;

    for(int i = 1; i < length; i++) 
        if(array[i] >array[index])
            index = i;

    return index;

}

int MaxValue(int *array, int length) {

    int max = array[0];
    for(int i = 1; i < length; i++) 
        if( array[i] > max)
            max = array[i];

    return max;

}

bool ArrayContains(int *_array, int _value, int _length) {

    for(int i = 0; i < _length; i++) 
        if(_array[i] == _value) 
            return true;

    return false;

}

int ArraySum(int *_array, int _length) {

    int _sum = 0;

    for(int i = 0; i < _length; i++) 
        _sum += _array[i];

    return _sum;

}

int Count(int *_array, int _value, int _length) {

    int _n = 0;
    for(int i = 0; i < _length; i++) 
        if(_array[i] == _value)
            _n++;

    return _n;

}

bool IsPalindrome(char *_array, int _length) {

    for(int i = 0; i < (_length/2 + _length%2); i++)
        if(_array[i] != _array[(_length-1)-i]) 
            return false;

    return true;

}

void FillRandomlyMatrix10(int _matrix[][10], int _min, int _max, int _length) {

    for(int y = 0; y < _length; y++) 
        for(int x = 0; x < _length; x++)
            _matrix[x][y] = Random(_min, _max);

}

void PrintMatrix10(int _matrix[][10], int _length) {

    for(int y = 0; y < _length; y++) 
        PrintArray(_matrix[y], _length);

}

void GetDiagonalMatrix10(int _matrix[][10], int *_array, int _length) {

    for(int i = 0; i < _length; i++) 
        _array[i] = _matrix[i][i];

}

int Pow(int _base, int _exponent) {

    if(_exponent == 1)
        return _base;

    return _base * Pow(_base, _exponent-1);

}

int Factorial(int number) {

    if(number == 1)
        return 1;

    return number * Factorial(number-1);

}

int Fibonacci(int _number) {

    if(_number == 0)
        return 0;
    
    if(_number == 1)
        return 1;

    return Fibonacci(_number-1)+Fibonacci(_number-2);

}