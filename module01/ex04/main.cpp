#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Invalid arguments" << std::endl;
        exit(1);
    }
    std::string line;
    std::string fileName(av[1]);
    std::string s1(av[2]);
    std::string s2(av[3]);
    std::ifstream file(av[1]);
    std::ofstream name;
     int pos;

    fileName.append(".replace");
    name.open(fileName);
    if (!file.is_open() || !name.is_open())
    {
        std::cout << "Error: file \"" << av[1] << "\" does not exist" << std::endl;
        exit(1);
    }
    while (std::getline(file, line))
    {
        while ((pos = line.find(s1)) >= 0)
        {
            line = line.erase(pos, s1.length());
            line.insert(pos, s2);    
        }
        name << line;
        if (line[0])
            name << std::endl;
    }
    name.close();
    file.close();
}