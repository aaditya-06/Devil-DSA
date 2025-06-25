#include <iostream>
#include <cstring>  //strlen
using namespace std;

int hashFunction(const char *value)
{
    int sum = 0;
    for (int i = 0; i < strlen(value); i++)
    {
        sum += (int)value[i];
    }
    return sum % 10;
}

int main()
{
    const char *value = "Bob";
    cout << hashFunction(value);

    return 0;
}
