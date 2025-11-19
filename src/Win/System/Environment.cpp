#include "Environment.hpp"

using namespace Installer::Win::System;

optional<string> Environment::mSystemRoot;
string Environment::mEmpty = "";

const string& Environment::GetSystemRoot()
{
    if (!mSystemRoot.has_value())
    {
        const char *systemRoot = std::getenv("SystemRoot");

        if (systemRoot != nullptr)
            mSystemRoot = systemRoot;
        else
            return mEmpty;
    }

    return mSystemRoot.value();
}