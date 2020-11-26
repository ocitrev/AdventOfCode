#include "day12.hpp"
#include "../common/assert.hpp"
#include "rapidjson/document.h"
#include <fmt/format.h>
#include <numeric>
#include <regex>

static int SumAllNumbers(rapidjson::Value const &value, bool checkExclusion)
{
    switch (value.GetType())
    {
    case rapidjson::kNumberType:
        return value.GetInt();

    case rapidjson::kArrayType:
    {
        auto const &arr = value.GetArray();
        return std::accumulate(arr.Begin(), arr.End(), 0, [checkExclusion](int total, rapidjson::Value const &value) {
            return total + SumAllNumbers(value, checkExclusion);
        });
    }

    case rapidjson::kObjectType:
    {
        auto const &obj = value.GetObject();

        if (checkExclusion)
        {
            bool const containsRed = std::any_of(obj.MemberBegin(), obj.MemberEnd(), [](auto const &member) {
                using namespace std::string_view_literals;
                return member.value.IsString() && member.value.GetString() == "red"sv;
            });

            if (containsRed)
            {
                return 0;
            }
        }

        return std::accumulate(obj.MemberBegin(), obj.MemberEnd(), 0, [checkExclusion](int total, auto const &member) {
            // fmt::print("{}\n", member.name.GetString());
            return total + SumAllNumbers(member.value, checkExclusion);
        });
    }

    default:
        return 0;
    }
}

static int SumAllNumbers(std::string_view text)
{
    rapidjson::Document jsonDocument;
    jsonDocument.Parse(text.data(), text.size());
    return SumAllNumbers(jsonDocument, false);
}

static int SumAllNumbersNoRed(std::string_view text)
{
    rapidjson::Document jsonDocument;
    jsonDocument.Parse(text.data(), text.size());
    return SumAllNumbers(jsonDocument, true);
}

int main()
{
    // https://adventofcode.com/2015/day/12
    fmt::print("Day 12: JSAbacusFramework.io\n");

    Assert(6 == SumAllNumbers(R"([1,2,3])"));
    Assert(6 == SumAllNumbers(R"({"a":2,"b":4})"));
    Assert(3 == SumAllNumbers(R"([[[3]]])"));
    Assert(3 == SumAllNumbers(R"({"a":{"b":4},"c":-1})"));
    Assert(0 == SumAllNumbers(R"({"a":[-1,1]})"));
    Assert(0 == SumAllNumbers(R"([-1,{"a":1}])"));
    Assert(0 == SumAllNumbers(R"([])"));
    Assert(0 == SumAllNumbers(R"({})"));

    Assert(6 == SumAllNumbersNoRed(R"([1,2,3])"));
    Assert(4 == SumAllNumbersNoRed(R"([1,{"c":"red","b":2},3])"));
    Assert(0 == SumAllNumbersNoRed(R"({"d":"red","e":[1,2,3,4],"f":5})"));
    Assert(6 == SumAllNumbersNoRed(R"([1,"red",5])"));

    fmt::print("  Part 1: {}\n", SumAllNumbers(input::data));
    fmt::print("  Part 2: {}\n", SumAllNumbersNoRed(input::data));
}
