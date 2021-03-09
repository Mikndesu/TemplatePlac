#include <iostream>
#include <string>
#include <cstdlib>
#include <filesystem>

int main(int argc, char *argv[]) {
    std::string directory_name;
    if(argc==1) {
        std::cin >> directory_name;
    } else {
        directory_name = static_cast<std::string>(argv[1]);
    }
    std::string current_path = static_cast<std::string>(std::filesystem::current_path());
    std::string command =
    "clang++ " + current_path + "/" +directory_name +"/main.cpp";
    std::system(command.c_str());
    command = "mv " + current_path +"/a.out " + current_path + "/" +directory_name +"/";
    std::system(command.c_str());
}