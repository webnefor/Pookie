
#include "parse.hpp"

opt::options_flag set_options;

struct opt::options_flag opt::parse(int argc, char *argv[]) {


//    std::vector<std::string> options;
    std::vector<std::string> array_opt;

    array_opt.push_back("-f"); // data file
    array_opt.push_back("-k"); // key crypt
    array_opt.push_back("-s"); // salt when crypt
    array_opt.push_back("-d"); // decrypt
    array_opt.push_back("-h"); // help

    for (int i = 0; i < argc; i++) {
        try {
            if (argv[i] == array_opt.at(0)) {
                set_options.mode        = atoi(argv[i + 1]);
            }

            if (argv[i] == array_opt.at(2)) {
                set_options.port        = atoi(argv[i + 1]);
            }
            if (argv[i] == array_opt.at(3)) {
                set_options.thread      = atoi(argv[i + 1]);
            }
            if (argv[i] == array_opt.at(4)) {
                set_options.help        = true;
            }
        }
        catch (const std::exception &error)
        {
            opt::show_help();
            std::cerr << error.what() << std::endl;
            exit(-1);
        }
    }
    if (set_options.port < 20) {
        opt::show_help();
        exit(1);
    }

    if (set_options.help) {
        opt::show_help();
        exit(1);
    }

    if (set_options.host == "NONE") {
        opt::show_help();
        exit(1);
    }

    if (set_options.mode)
        if (geteuid() != 0) {
//          printf("\033[031m[%i]",args->port);
            printf("\033[031mNot running with root permissions.\n");
            exit(-1);
        }

    return set_options;
}

void opt::show_help() {
    using std::cout;
    using std::endl;

    cout << "Pookie: option requires an argument -h" << endl;
    cout << "usage: "<< endl;
    cout << "\t-f\ttarget file: example [target.com]" << endl;
    cout << "\t-p\tport host: (default 80)"<< endl;
    cout << "\t-m\tmode http or icmp: (default http)"<< endl;
    cout << "\t-t\tcount threads: (default 2)"<< endl;
    cout << endl;

}
