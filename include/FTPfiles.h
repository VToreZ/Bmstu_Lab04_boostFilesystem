//Copyright 2019 <VToreZ>
#include <boost/filesystem.hpp>
#include <string>
#include <iostream>
#include <map>
#include <string>
using std::string;
using std::pair;
using std::map;
using namespace boost::filesystem;

struct file{
    string name;
    string balance;
    string number;
    string separator;
    string date;
    string type;
};
static string mypath="/home/rooted/Documents/lab-04-boost-filesystem/ftp";
string getLatestDate(const string &date1, const string &date2);
void printFinFile(const path &p, map<string, pair <unsigned int, string>>& accounts);
void printAccountsInfo(const path &path_to_dir, map<string, pair <unsigned int, string>>& accounts);
void analyse(const path& p, map<string, pair <unsigned int, string>>& accounts);
void iterate(const path &pathToDir);