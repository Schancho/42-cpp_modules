
#include <iostream>
#include <iomanip>

bool isvalid(std::string& str)
{
    return (
        str.find_first_not_of("-.f0123456789") != std::string::npos
        || str == "inf"
        || str == "inff"
        || str == "+inff"
        || str == "nanf"
        || str == "-inf"
        || str == "+inf"
        || str == "nan"
    );
}

int main(int ac, char** argv)
{
    bool flag = false;

    if (ac != 2)
    {
        std::cout << "Invalid arguments count" << std::endl;
        return 1;
    }

    std::string str = std::string(argv[1]);

    flag = isvalid(str);

    int    a = static_cast<int> (std::atoi(str.c_str()));
    double b = static_cast<double> (std::atof(str.c_str()));
    char   c = static_cast<char> (std::atoi(str.c_str()));


    if (flag)
    {
        std::cout << "char: Impossible" <<  std::endl;
        std::cout << "int: Impossible" <<  std::endl;
    }
    else
    {

        if (isprint(c)) // 32 to 126 
            std::cout << "char: "<< c << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: "<< a << std::endl;
    }

    std::cout << "float: "<< std::fixed << std::setprecision(1) << b << "f" << std::endl;
    std::cout << "double: "<< b << std::endl;

    return 0;

}