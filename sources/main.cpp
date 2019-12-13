//Copyright 2019 <VToreZ>
#include "FTPfiles.h"

int main(int argc, char *argv[]) {
    if (argc < 2)
    {
        path path_to_ftp("/home/rooted/Documents/lab-04-boost-filesystem/ftp");
        iterate(path_to_ftp);
    } else {
        path path_to_ftp(argv[1]);
        iterate(path_to_ftp);
    }

    return 0;
}
