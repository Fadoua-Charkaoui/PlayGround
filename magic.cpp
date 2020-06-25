#include <iostream>
#include <vector>

std::vector<std::vector<int>> magic(int n);
void printmagic(std::vector<std::vector<int>> input);

int main()
{

    printmagic(magic(21));
    return 0;
}

std::vector<std::vector<int>> magic(int n)
{

    std::vector<std::vector<int>> magicvect(n);

    for (int idx = 0; idx < n; idx++)
    {
        magicvect[idx] = std::vector<int>(n, 0);
    }
    int x = 0, y = n / 2;

    for (int i = 1; i < (n * n) + 1; i++)
    {
        magicvect[x][y] = i;
        if (i % n == 0)
        {
            x++;
        }
        else
        {
            x--;
            y--;
        }
        if (x < 0)
        {
            x = n - 1;
        }
        if (y < 0)
        {
            y = n - 1;
        }

        if (x >= n)
        {
            x = 0;
        }
    }

    return magicvect;
}

void printmagic(std::vector<std::vector<int>> input)
{
    for (auto vect : input)
    {
        for (auto tmp : vect)
        {
            std::cout << tmp << ",";
        }
        std::cout << std::endl;
    }
}