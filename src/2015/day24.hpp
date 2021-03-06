#pragma once
#include <array>

namespace example
{
    [[maybe_unused]] static constexpr std::array numbers{1, 2, 3, 4, 5, 7, 8, 9, 10, 11};
}

namespace input
{
    constexpr std::array numbers{
        1,  3,  5,  11, 13, 17, 19, 23, 29, 31,  41,  43,  47,  53,
        59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113,
    };
}
