#include "day06.hpp"
#include "../common/assert.hpp"
#include "../common/string.hpp"
#include "../common/terminal.hpp"
#include <algorithm>
#include <fmt/format.h>
#include <map>
#include <string>
#include <vector>

static std::map<std::string, int> countCache; // NOLINT

static int CountIndirect(std::vector<std::string> const &list, std::string const &name)
{
    if (name == "COM")
        return 0;

    if (auto iter = countCache.find(name); iter != end(countCache))
        return iter->second;

    for (auto const &item : list)
    {
        auto parts = Split(item, ')');

        if (parts[1] == name)
        {
            int ret = 1 + CountIndirect(list, parts[0]);
            countCache[name] = ret;
            return ret;
        }
    }

    throw std::invalid_argument{"Not found"};
}

static std::map<std::string, std::vector<std::string>> pathCache; // NOLINT

static std::vector<std::string> GetPath(std::vector<std::string> const &list, std::string const &name)
{
    if (name == "COM")
        return {};

    if (auto iter = pathCache.find(name); iter != end(pathCache))
        return iter->second;

    for (auto const &item : list)
    {
        auto parts = Split(item, ')');

        if (parts[1] == name)
        {
            auto ret = GetPath(list, parts[0]);
            ret.push_back(parts[0]);
            pathCache[name] = ret;
            return ret;
        }
    }

    throw std::invalid_argument{"Not found"};
}

int main()
{
    fmt::print("Day 6: Universal Orbit Map\n");
    Assert(3 == CountIndirect(Split(example::data, '\n'), "D"));
    Assert(7 == CountIndirect(Split(example::data, '\n'), "L"));
    Assert(0 == CountIndirect(Split(example::data, '\n'), "COM"));

    pathCache.clear();
    countCache.clear();
    auto const list = Split(input::data, '\n');

    int count = 0;

    for (auto const &item : list)
    {
        auto last = Split(item, ')')[1];
        count += CountIndirect(list, last);
    }

    fmt::print("  Part1: {}\n", count);
    Assert(247089 == count);

    auto you = GetPath(list, "YOU");
    auto san = GetPath(list, "SAN");

    std::sort(begin(you), end(you));
    std::sort(begin(san), end(san));

    std::vector<std::string> result;
    std::set_symmetric_difference(begin(you), end(you), begin(san), end(san), std::back_inserter(result),
                                  [](auto const &a, auto const &b) {
                                      return a < b;
                                  });

    fmt::print("  Part2: {}\n", result.size());
    Assert(442 == result.size());
}
