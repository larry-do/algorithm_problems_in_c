#include <cstdio>
#include <string>

        int i;
        float f;
        double d;
        std::string str;

        // string -> integer
        if(sscanf(str.c_str(), "%d", &i) != 1)
            // error management

        // string -> float
        if(sscanf(str.c_str(), "%f", &f) != 1)
            // error management

        // string -> double 
        if(sscanf(str.c_str(), "%lf", &d) != 1)
