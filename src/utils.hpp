#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool file_exists(const char *filename);
string get_package_manager(string filename);
void create_conf(string filename, string packagemanager);
void checkcmd(string cmd);