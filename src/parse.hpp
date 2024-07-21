



#define HTTP 0
#define ICMP 1


namespace opt {

    extern "C" {

        #include <unistd.h>
        #include <iostream>
        #include <string>
        #include <vector>
        #include <cstdio>

        void show_help();


        struct options_flag {
            unsigned int mtime = 1;
            unsigned int port = 80;
            unsigned int thread = 5;
            unsigned int mode = HTTP;
            std::string host = "NONE";
            bool help = false;
        };

        struct options_flag parse(int, char *[]);
    };
}