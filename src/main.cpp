#include <fmt/core.h>
#include <string>

int main() {
std::string world = fmt::format("Hello {}", "World");
fmt::print("{}", world);
return 0;
}