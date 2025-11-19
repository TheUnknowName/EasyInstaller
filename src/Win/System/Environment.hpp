#pragma once

#include <cstdlib>
#include <string>
#include <optional>

namespace Installer
{
    namespace Win
    {
        namespace System
        {
            using std::optional;
            using std::string;

            class Environment
            {
            private:
                static optional<string> mSystemRoot;
                static string mEmpty;

            public:
                static const string& GetSystemRoot();
            };
        }
    }
}